#include "roomManager.h"
#include "ui_roomManager.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QDateTime>
#include <QMenu>
#include <QFrame>

roomManager::roomManager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::roomManager)
    , db(new DatabaseManager(this))
    , currentFloor(1)
{
    ui->setupUi(this);
    
    // Créer le layout pour les chambres s'il n'existe pas
    if (!ui->centralWidget->layout()) {
        QVBoxLayout* mainLayout = new QVBoxLayout(ui->centralWidget);
        
        // Ajouter un titre pour l'étage actuel
        QLabel* floorTitleLabel = new QLabel("Étage 1", ui->centralWidget);
        floorTitleLabel->setObjectName("floorTitleLabel");
        floorTitleLabel->setAlignment(Qt::AlignCenter);
        floorTitleLabel->setStyleSheet("font-size: 18pt; font-weight: bold; margin-bottom: 10px;");
        mainLayout->addWidget(floorTitleLabel);
        
        // Ajouter une légende
        QWidget* legendWidget = new QWidget(ui->centralWidget);
        QHBoxLayout* legendLayout = new QHBoxLayout(legendWidget);
        
        QLabel* freeLabel = new QLabel("Libre", legendWidget);
        QFrame* freeColor = new QFrame(legendWidget);
        freeColor->setFixedSize(20, 20);
        freeColor->setStyleSheet("background-color: green; border-radius: 3px;");
        
        QLabel* partialLabel = new QLabel("Partiellement occupée", legendWidget);
        QFrame* partialColor = new QFrame(legendWidget);
        partialColor->setFixedSize(20, 20);
        partialColor->setStyleSheet("background-color: orange; border-radius: 3px;");
        
        QLabel* fullLabel = new QLabel("Complète", legendWidget);
        QFrame* fullColor = new QFrame(legendWidget);
        fullColor->setFixedSize(20, 20);
        fullColor->setStyleSheet("background-color: red; border-radius: 3px;");
        
        QLabel* problemLabel = new QLabel("Problème signalé", legendWidget);
        QFrame* problemColor = new QFrame(legendWidget);
        problemColor->setFixedSize(20, 20);
        problemColor->setStyleSheet("background-color: purple; border-radius: 3px;");
        
        legendLayout->addWidget(freeColor);
        legendLayout->addWidget(freeLabel);
        legendLayout->addSpacing(20);
        legendLayout->addWidget(partialColor);
        legendLayout->addWidget(partialLabel);
        legendLayout->addSpacing(20);
        legendLayout->addWidget(fullColor);
        legendLayout->addWidget(fullLabel);
        legendLayout->addSpacing(20);
        legendLayout->addWidget(problemColor);
        legendLayout->addWidget(problemLabel);
        legendLayout->addStretch();
        
        mainLayout->addWidget(legendWidget);
        
        // Ajouter le layout pour les chambres
        QGridLayout* roomsLayout = new QGridLayout();
        roomsLayout->setSpacing(10);
        mainLayout->addLayout(roomsLayout);
        mainLayout->addStretch();
    }
    
    if (!db->initializeDatabase()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'initialiser la base de données");
        return;
    }
    
    setupRooms();
    updateRoomDisplay(currentFloor);
}

roomManager::~roomManager()
{
    delete ui;
}

void roomManager::setupRooms()
{
    // Initialisation des chambres pour chaque étage
    // Format de numérotation: Étage * 100 + Numéro de chambre
    // Par exemple: Chambre 102 = 1er étage, chambre 2
    
    // Étage 1
    db->addRoom(1, 101, 4); // Chambre 101, capacité 4
    db->addRoom(1, 102, 2); // Chambre 102, capacité 2
    db->addRoom(1, 103, 4); // Chambre 103, capacité 4
    db->addRoom(1, 104, 6); // Chambre 104, capacité 6
    db->addRoom(1, 105, 2); // Chambre 105, capacité 2
    
    // Étage 2
    db->addRoom(2, 201, 4); // Chambre 201, capacité 4
    db->addRoom(2, 202, 2); // Chambre 202, capacité 2
    db->addRoom(2, 203, 4); // Chambre 203, capacité 4
    db->addRoom(2, 204, 6); // Chambre 204, capacité 6
    db->addRoom(2, 205, 2); // Chambre 205, capacité 2
    
    // Étage 3
    db->addRoom(3, 301, 4); // Chambre 301, capacité 4
    db->addRoom(3, 302, 2); // Chambre 302, capacité 2
    db->addRoom(3, 303, 4); // Chambre 303, capacité 4
    db->addRoom(3, 304, 6); // Chambre 304, capacité 6
    db->addRoom(3, 305, 2); // Chambre 305, capacité 2
    
    // Étage 4
    db->addRoom(4, 401, 4); // Chambre 401, capacité 4
    db->addRoom(4, 402, 2); // Chambre 402, capacité 2
    db->addRoom(4, 403, 4); // Chambre 403, capacité 4
    db->addRoom(4, 404, 6); // Chambre 404, capacité 6
    db->addRoom(4, 405, 2); // Chambre 405, capacité 2
}

void roomManager::createRoomWidget(int floor, int roomNumber, int capacity)
{
    QWidget* roomWidget = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(roomWidget);
    
    // Créer un cadre pour la chambre
    QFrame* roomFrame = new QFrame(roomWidget);
    roomFrame->setFrameShape(QFrame::Box);
    roomFrame->setLineWidth(2);
    
    QVBoxLayout* frameLayout = new QVBoxLayout(roomFrame);
    
    // Titre de la chambre
    QLabel* roomTitle = new QLabel(QString("Chambre %1").arg(roomNumber), roomFrame);
    roomTitle->setAlignment(Qt::AlignCenter);
    roomTitle->setStyleSheet("font-weight: bold; font-size: 14pt;");
    
    // Capacité
    QLabel* capacityLabel = new QLabel(QString("Capacité: %1").arg(capacity), roomFrame);
    capacityLabel->setAlignment(Qt::AlignCenter);
    
    // Statut
    QLabel* statusLabel = new QLabel("Statut: Non Occuper", roomFrame);
    statusLabel->setAlignment(Qt::AlignCenter);
    statusLabel->setObjectName("statusLabel");
    
    // Bouton pour les actions
    QPushButton* actionButton = new QPushButton("Actions", roomFrame);
    actionButton->setProperty("roomId", QString("%1_%2").arg(floor).arg(roomNumber));
    connect(actionButton, &QPushButton::clicked, this, &roomManager::onRoomClicked);
    
    frameLayout->addWidget(roomTitle);
    frameLayout->addWidget(capacityLabel);
    frameLayout->addWidget(statusLabel);
    frameLayout->addWidget(actionButton);
    
    layout->addWidget(roomFrame);
    
    roomWidgets[roomNumber] = roomWidget;
    
    // Utiliser le QGridLayout pour placer la chambre
    QVBoxLayout* mainLayout = qobject_cast<QVBoxLayout*>(ui->centralWidget->layout());
    if (mainLayout) {
        QGridLayout* roomsLayout = qobject_cast<QGridLayout*>(mainLayout->itemAt(2)->layout());
        if (roomsLayout) {
            // Calculer la position dans la grille (5 chambres par ligne)
            int index = (roomNumber % 100) - 1; // Convertir 101 en index 0, 102 en index 1, etc.
            int row = index / 5;
            int col = index % 5;
            roomsLayout->addWidget(roomWidget, row, col);
        }
    }
}

void roomManager::updateRoomDisplay(int floor)
{
    // Mettre à jour le titre de l'étage avec un texte plus descriptif
    QVBoxLayout* mainLayout = qobject_cast<QVBoxLayout*>(ui->centralWidget->layout());
    if (mainLayout) {
        QLabel* floorTitleLabel = ui->centralWidget->findChild<QLabel*>("floorTitleLabel");
        if (floorTitleLabel) {
            QString floorName;
            switch(floor) {
                case 1:
                    floorName = "Premier Étage";
                    break;
                case 2:
                    floorName = "Deuxième Étage";
                    break;
                case 3:
                    floorName = "Troisième Étage";
                    break;
                case 4:
                    floorName = "Quatrième Étage";
                    break;
                default:
                    floorName = QString("Étage %1").arg(floor);
            }
            floorTitleLabel->setText(floorName);
            setWindowTitle(QString("Gestion des Chambres - %1").arg(floorName));
        }
        
        // Nettoyer l'affichage actuel des chambres
        QGridLayout* roomsLayout = qobject_cast<QGridLayout*>(mainLayout->itemAt(2)->layout());
        if (roomsLayout) {
            QLayoutItem* item;
            while ((item = roomsLayout->takeAt(0)) != nullptr) {
                delete item->widget();
                delete item;
            }
        }
    }
    
    // Réinitialiser la map des widgets de chambre
    roomWidgets.clear();
    
    // Afficher les chambres de l'étage actuel
    auto rooms = db->getRoomsOnFloor(floor);
    for (const auto& room : rooms) {
        createRoomWidget(floor, room.first, 4); // Utiliser la capacité réelle plus tard
        updateRoomStatus(room.first);
    }
    
    currentFloor = floor;
    
    // Mettre à jour l'indicateur d'étage avec un texte plus descriptif
    QString floorText;
    switch(floor) {
        case 1:
            floorText = "Vous êtes au Premier Étage";
            break;
        case 2:
            floorText = "Vous êtes au Deuxième Étage";
            break;
        case 3:
            floorText = "Vous êtes au Troisième Étage";
            break;
        case 4:
            floorText = "Vous êtes au Quatrième Étage";
            break;
        default:
            floorText = QString("Vous êtes à l'Étage %1").arg(floor);
    }
    ui->floorVariableLabel->setText(floorText);
}

void roomManager::updateRoomStatus(int roomId)
{
    QString status = db->getRoomStatus(roomId);
    int occupancy = db->getCurrentOccupancy(roomId);
    
    QWidget* roomWidget = roomWidgets[roomId];
    if (!roomWidget) return;
    
    QFrame* roomFrame = roomWidget->findChild<QFrame*>();
    if (!roomFrame) return;
    
    QLabel* statusLabel = roomFrame->findChild<QLabel*>("statusLabel");
    if (!statusLabel) return;
    
    QString statusText;
    QString styleSheet;
    
    if (occupancy == 0) {
        statusText = "Statut: Libre";
        styleSheet = "background-color: #90EE90; border-radius: 5px; border: 2px solid #2E8B57;"; // Vert clair
    } else if (occupancy < 4) {
        statusText = QString("Statut: Partiellement occupée (%1/%2)").arg(occupancy).arg(4);
        styleSheet = "background-color: #FFD700; border-radius: 5px; border: 2px solid #DAA520;"; // Jaune/Orange
    } else {
        statusText = "Statut: Complète";
        styleSheet = "background-color: #FF6347; border-radius: 5px; border: 2px solid #8B0000;"; // Rouge
    }
    
    statusLabel->setText(statusText);
    roomFrame->setStyleSheet(styleSheet);
}

void roomManager::showAddPersonDialog(int roomId)
{
    bool ok;
    QString name = QInputDialog::getText(this, "Ajouter une personne",
                                       "Nom:", QLineEdit::Normal, "", &ok);
    if (!ok || name.isEmpty()) return;
    
    QString rank = QInputDialog::getText(this, "Ajouter une personne",
                                       "Grade:", QLineEdit::Normal, "", &ok);
    if (!ok || rank.isEmpty()) return;
    
    // Pour simplifier, on ajoute la personne pour une durée d'un mois
    QDateTime startDate = QDateTime::currentDateTime();
    QDateTime endDate = startDate.addMonths(1);
    
    if (db->addOccupant(roomId, name, rank, startDate, endDate)) {
        updateRoomStatus(roomId);
    } else {
        QMessageBox::warning(this, "Erreur", "Impossible d'ajouter la personne");
    }
}

void roomManager::showAddProblemDialog(int roomId)
{
    bool ok;
    QString description = QInputDialog::getMultiLineText(this, "Signaler un problème",
                                                       "Description:", "", &ok);
    if (!ok || description.isEmpty()) return;
    
    if (db->addProblem(roomId, description, QDateTime::currentDateTime())) {
        QMessageBox::information(this, "Succès", "Problème enregistré");
    } else {
        QMessageBox::warning(this, "Erreur", "Impossible d'enregistrer le problème");
    }
}

void roomManager::showRoomHistory(int roomId)
{
    auto history = db->getRoomHistory(roomId);
    QString historyText = "Historique des occupants:\n\n";
    
    for (const auto& entry : history) {
        historyText += QString("%1 - %2\n")
                          .arg(entry.first)
                          .arg(entry.second.toString("dd/MM/yyyy"));
    }
    
    QMessageBox::information(this, "Historique", historyText);
}

void roomManager::onRoomClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (!button) return;
    
    QStringList parts = button->property("roomId").toString().split('_');
    if (parts.size() != 2) return;
    
    int roomId = parts[0].toInt() * 100 + parts[1].toInt();
    
    QMenu menu(this);
    menu.addAction("Ajouter une personne", [this, roomId]() {
        showAddPersonDialog(roomId);
    });
    menu.addAction("Signaler un problème", [this, roomId]() {
        showAddProblemDialog(roomId);
    });
    menu.addAction("Voir l'historique", [this, roomId]() {
        showRoomHistory(roomId);
    });
    
    menu.exec(QCursor::pos());
}

void roomManager::on_floor4Button_clicked()
{
    updateRoomDisplay(4);
    ui->youAreHereLabel->setGeometry(290,80,71,80);
    ui->floorVariableLabel->setGeometry(30,190,141,71);
}

void roomManager::on_floor3Button_clicked()
{
    updateRoomDisplay(3);
    ui->youAreHereLabel->setGeometry(290,180,71,80);
    ui->floorVariableLabel->setGeometry(30,290,141,71);
}

void roomManager::on_floor2Button_clicked()
{
    updateRoomDisplay(2);
    ui->youAreHereLabel->setGeometry(290,280,71,80);
    ui->floorVariableLabel->setGeometry(30,390,141,71);
}

void roomManager::on_floor1Button_clicked()
{
    updateRoomDisplay(1);
    ui->youAreHereLabel->setGeometry(290,380,71,80);
    ui->floorVariableLabel->setGeometry(30,490,141,71);
}

void roomManager::moveFloorVariable()
{
    ui->floorVariableLabel->setGeometry(70,160,81,71);
}

void roomManager::moveFloorImage()
{
    ui->floor1Button->setGeometry(50,40,241,121);
}


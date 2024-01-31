/********************************************************************************
** Form generated from reading UI file 'roomManager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMANAGER_H
#define UI_ROOMMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roomManager
{
public:
    QLabel *floorVariableLabel;
    QGroupBox *floorGroupBox;
    QPushButton *floor4Button;
    QPushButton *floor3Button;
    QPushButton *floor1Button;
    QPushButton *floor2Button;
    QLabel *youAreHereLabel;
    QLabel *nameVariableLabel;
    QGroupBox *roomDetailGroupBox;
    QLabel *roomNumberLabel;
    QPushButton *seeHistoricalButton;
    QPushButton *addProblemButton;
    QPushButton *addPersonButton;
    QLabel *displayPersonLabel;
    QGroupBox *problemDetailGroupBox;
    QGroupBox *statusGroupBox;
    QLabel *problemLabel;
    QLabel *notBusyLabel;
    QLabel *violetLabel;
    QLabel *label_5;
    QLabel *redLabel;
    QLabel *greenLabel;
    QLabel *completLabel;
    QLabel *halfBusyLabel;

    void setupUi(QWidget *roomManager)
    {
        if (roomManager->objectName().isEmpty())
            roomManager->setObjectName("roomManager");
        roomManager->resize(1920, 1080);
        roomManager->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"color:black;"));
        floorVariableLabel = new QLabel(roomManager);
        floorVariableLabel->setObjectName("floorVariableLabel");
        floorVariableLabel->setGeometry(QRect(30, 190, 141, 71));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        floorVariableLabel->setFont(font);
        floorVariableLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        floorGroupBox = new QGroupBox(roomManager);
        floorGroupBox->setObjectName("floorGroupBox");
        floorGroupBox->setGeometry(QRect(190, 110, 371, 531));
        floorGroupBox->setStyleSheet(QString::fromUtf8("background: transparent;"));
        floor4Button = new QPushButton(floorGroupBox);
        floor4Button->setObjectName("floor4Button");
        floor4Button->setGeometry(QRect(40, 50, 251, 141));
        floor4Button->setStyleSheet(QString::fromUtf8("border-style: outset;\\n\n"
"background: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Floors/images/floors/floor.png"), QSize(), QIcon::Normal, QIcon::Off);
        floor4Button->setIcon(icon);
        floor4Button->setIconSize(QSize(260, 140));
        floor3Button = new QPushButton(floorGroupBox);
        floor3Button->setObjectName("floor3Button");
        floor3Button->setGeometry(QRect(40, 150, 251, 141));
        floor3Button->setStyleSheet(QString::fromUtf8("border-style: outset;\\n\n"
"background: transparent;"));
        floor3Button->setIcon(icon);
        floor3Button->setIconSize(QSize(260, 140));
        floor1Button = new QPushButton(floorGroupBox);
        floor1Button->setObjectName("floor1Button");
        floor1Button->setGeometry(QRect(40, 350, 251, 141));
        floor1Button->setStyleSheet(QString::fromUtf8("border-style: outset;\\n\n"
"background: transparent;"));
        floor1Button->setIcon(icon);
        floor1Button->setIconSize(QSize(260, 140));
        floor2Button = new QPushButton(floorGroupBox);
        floor2Button->setObjectName("floor2Button");
        floor2Button->setGeometry(QRect(40, 250, 251, 141));
        floor2Button->setStyleSheet(QString::fromUtf8("border-style: outset;\\n\n"
"background: transparent;"));
        floor2Button->setIcon(icon);
        floor2Button->setIconSize(QSize(260, 140));
        youAreHereLabel = new QLabel(floorGroupBox);
        youAreHereLabel->setObjectName("youAreHereLabel");
        youAreHereLabel->setGeometry(QRect(290, 80, 71, 81));
        youAreHereLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        youAreHereLabel->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/youAreHere.png")));
        youAreHereLabel->setScaledContents(true);
        floor1Button->raise();
        floor2Button->raise();
        floor3Button->raise();
        floor4Button->raise();
        youAreHereLabel->raise();
        nameVariableLabel = new QLabel(roomManager);
        nameVariableLabel->setObjectName("nameVariableLabel");
        nameVariableLabel->setGeometry(QRect(750, 10, 401, 71));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        nameVariableLabel->setFont(font1);
        nameVariableLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        roomDetailGroupBox = new QGroupBox(roomManager);
        roomDetailGroupBox->setObjectName("roomDetailGroupBox");
        roomDetailGroupBox->setGeometry(QRect(1400, 110, 291, 621));
        roomDetailGroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        roomNumberLabel = new QLabel(roomDetailGroupBox);
        roomNumberLabel->setObjectName("roomNumberLabel");
        roomNumberLabel->setGeometry(QRect(100, 40, 91, 31));
        roomNumberLabel->setFont(font);
        roomNumberLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        seeHistoricalButton = new QPushButton(roomDetailGroupBox);
        seeHistoricalButton->setObjectName("seeHistoricalButton");
        seeHistoricalButton->setGeometry(QRect(40, 170, 211, 61));
        QFont font2;
        font2.setBold(true);
        seeHistoricalButton->setFont(font2);
        seeHistoricalButton->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Status/images/see.png"), QSize(), QIcon::Normal, QIcon::Off);
        seeHistoricalButton->setIcon(icon1);
        addProblemButton = new QPushButton(roomDetailGroupBox);
        addProblemButton->setObjectName("addProblemButton");
        addProblemButton->setGeometry(QRect(40, 260, 211, 61));
        addProblemButton->setFont(font2);
        addProblemButton->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Status/images/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        addProblemButton->setIcon(icon2);
        addPersonButton = new QPushButton(roomDetailGroupBox);
        addPersonButton->setObjectName("addPersonButton");
        addPersonButton->setGeometry(QRect(40, 80, 211, 61));
        addPersonButton->setFont(font2);
        addPersonButton->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        addPersonButton->setIcon(icon2);
        displayPersonLabel = new QLabel(roomDetailGroupBox);
        displayPersonLabel->setObjectName("displayPersonLabel");
        displayPersonLabel->setGeometry(QRect(30, 360, 231, 231));
        displayPersonLabel->setFont(font2);
        problemDetailGroupBox = new QGroupBox(roomManager);
        problemDetailGroupBox->setObjectName("problemDetailGroupBox");
        problemDetailGroupBox->setGeometry(QRect(230, 700, 1131, 221));
        problemDetailGroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        statusGroupBox = new QGroupBox(roomManager);
        statusGroupBox->setObjectName("statusGroupBox");
        statusGroupBox->setGeometry(QRect(1390, 730, 271, 161));
        statusGroupBox->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        problemLabel = new QLabel(statusGroupBox);
        problemLabel->setObjectName("problemLabel");
        problemLabel->setGeometry(QRect(60, 130, 201, 21));
        QFont font3;
        font3.setPointSize(15);
        problemLabel->setFont(font3);
        problemLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        notBusyLabel = new QLabel(statusGroupBox);
        notBusyLabel->setObjectName("notBusyLabel");
        notBusyLabel->setGeometry(QRect(60, 10, 121, 31));
        notBusyLabel->setFont(font3);
        notBusyLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        violetLabel = new QLabel(statusGroupBox);
        violetLabel->setObjectName("violetLabel");
        violetLabel->setGeometry(QRect(10, 130, 31, 31));
        violetLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        violetLabel->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/Status/violet.png")));
        label_5 = new QLabel(statusGroupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 50, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/Status/orange.png")));
        redLabel = new QLabel(statusGroupBox);
        redLabel->setObjectName("redLabel");
        redLabel->setGeometry(QRect(10, 90, 31, 31));
        redLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        redLabel->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/Status/red.png")));
        greenLabel = new QLabel(statusGroupBox);
        greenLabel->setObjectName("greenLabel");
        greenLabel->setGeometry(QRect(10, 10, 31, 41));
        greenLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        greenLabel->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/Status/green.png")));
        completLabel = new QLabel(statusGroupBox);
        completLabel->setObjectName("completLabel");
        completLabel->setGeometry(QRect(60, 90, 81, 31));
        completLabel->setFont(font3);
        completLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        halfBusyLabel = new QLabel(statusGroupBox);
        halfBusyLabel->setObjectName("halfBusyLabel");
        halfBusyLabel->setGeometry(QRect(60, 50, 191, 31));
        halfBusyLabel->setFont(font3);
        halfBusyLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));

        retranslateUi(roomManager);

        QMetaObject::connectSlotsByName(roomManager);
    } // setupUi

    void retranslateUi(QWidget *roomManager)
    {
        roomManager->setWindowTitle(QCoreApplication::translate("roomManager", "Form", nullptr));
        floorVariableLabel->setText(QCoreApplication::translate("roomManager", "Floor Variable", nullptr));
        floorGroupBox->setTitle(QString());
        floor4Button->setText(QString());
        floor3Button->setText(QString());
        floor1Button->setText(QString());
        floor2Button->setText(QString());
        youAreHereLabel->setText(QString());
        nameVariableLabel->setText(QCoreApplication::translate("roomManager", "Name Building Variable", nullptr));
        roomDetailGroupBox->setTitle(QString());
        roomNumberLabel->setText(QCoreApplication::translate("roomManager", "Chambre", nullptr));
        seeHistoricalButton->setText(QCoreApplication::translate("roomManager", "Historique occupant", nullptr));
        addProblemButton->setText(QCoreApplication::translate("roomManager", "Ajouter un probleme", nullptr));
        addPersonButton->setText(QCoreApplication::translate("roomManager", "Ajouter un occupant", nullptr));
        displayPersonLabel->setText(QCoreApplication::translate("roomManager", "VariableNameOccupant", nullptr));
        problemDetailGroupBox->setTitle(QString());
        statusGroupBox->setTitle(QString());
        problemLabel->setText(QCoreApplication::translate("roomManager", "Non Attribuable", nullptr));
        notBusyLabel->setText(QCoreApplication::translate("roomManager", "Non Occuper", nullptr));
        violetLabel->setText(QString());
        label_5->setText(QString());
        redLabel->setText(QString());
        greenLabel->setText(QString());
        completLabel->setText(QCoreApplication::translate("roomManager", "Complet", nullptr));
        halfBusyLabel->setText(QCoreApplication::translate("roomManager", "Occuper Partiellement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class roomManager: public Ui_roomManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMANAGER_H

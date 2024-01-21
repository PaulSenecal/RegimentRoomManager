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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roomManager
{
public:
    QLabel *floorVariableLabel;
    QGroupBox *floorGroupBox;
    QLabel *floor1ImageLabel;
    QLabel *floor2Imagelabel;
    QLabel *floor4ImageLabel;
    QLabel *floor3ImageLabel;
    QLabel *nameVariableLabel;
    QGroupBox *roomDetailGroupBox;
    QLabel *roomNumberLabel;
    QLabel *roomNumberLabel_2;
    QLabel *roomNumberLabel_3;
    QLabel *roomNumberLabel_4;
    QLabel *label;
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
        floorVariableLabel->setGeometry(QRect(50, 160, 121, 71));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        floorVariableLabel->setFont(font);
        floorVariableLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        floorGroupBox = new QGroupBox(roomManager);
        floorGroupBox->setObjectName("floorGroupBox");
        floorGroupBox->setGeometry(QRect(190, 110, 371, 531));
        floorGroupBox->setStyleSheet(QString::fromUtf8("background: transparent;"));
        floor1ImageLabel = new QLabel(floorGroupBox);
        floor1ImageLabel->setObjectName("floor1ImageLabel");
        floor1ImageLabel->setGeometry(QRect(50, 370, 241, 121));
        floor1ImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/Floors/images/floors/floor.png")));
        floor2Imagelabel = new QLabel(floorGroupBox);
        floor2Imagelabel->setObjectName("floor2Imagelabel");
        floor2Imagelabel->setGeometry(QRect(50, 320, 241, 121));
        floor2Imagelabel->setPixmap(QPixmap(QString::fromUtf8(":/Floors/images/floors/floor.png")));
        floor4ImageLabel = new QLabel(floorGroupBox);
        floor4ImageLabel->setObjectName("floor4ImageLabel");
        floor4ImageLabel->setGeometry(QRect(50, 40, 241, 121));
        floor4ImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/Floors/images/floors/floor.png")));
        floor3ImageLabel = new QLabel(floorGroupBox);
        floor3ImageLabel->setObjectName("floor3ImageLabel");
        floor3ImageLabel->setGeometry(QRect(50, 220, 241, 121));
        floor3ImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/Floors/images/floors/floor.png")));
        nameVariableLabel = new QLabel(roomManager);
        nameVariableLabel->setObjectName("nameVariableLabel");
        nameVariableLabel->setGeometry(QRect(750, 10, 311, 71));
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
        QFont font2;
        font2.setPointSize(12);
        roomNumberLabel->setFont(font2);
        roomNumberLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        roomNumberLabel_2 = new QLabel(roomDetailGroupBox);
        roomNumberLabel_2->setObjectName("roomNumberLabel_2");
        roomNumberLabel_2->setGeometry(QRect(30, 70, 241, 61));
        roomNumberLabel_2->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        roomNumberLabel_3 = new QLabel(roomDetailGroupBox);
        roomNumberLabel_3->setObjectName("roomNumberLabel_3");
        roomNumberLabel_3->setGeometry(QRect(30, 160, 231, 41));
        roomNumberLabel_3->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        roomNumberLabel_4 = new QLabel(roomDetailGroupBox);
        roomNumberLabel_4->setObjectName("roomNumberLabel_4");
        roomNumberLabel_4->setGeometry(QRect(30, 230, 231, 41));
        roomNumberLabel_4->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 20px;\n"
"border-color: black;"));
        label = new QLabel(roomDetailGroupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 82, 41, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Status/images/see.png")));
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
        floor1ImageLabel->setText(QString());
        floor2Imagelabel->setText(QString());
        floor4ImageLabel->setText(QString());
        floor3ImageLabel->setText(QString());
        nameVariableLabel->setText(QCoreApplication::translate("roomManager", "Name Building Variable", nullptr));
        roomDetailGroupBox->setTitle(QString());
        roomNumberLabel->setText(QCoreApplication::translate("roomManager", "Chambre", nullptr));
        roomNumberLabel_2->setText(QCoreApplication::translate("roomManager", "Historique Occupant", nullptr));
        roomNumberLabel_3->setText(QCoreApplication::translate("roomManager", "Ajouter un Occupante", nullptr));
        roomNumberLabel_4->setText(QCoreApplication::translate("roomManager", "Ajouter un Probleme", nullptr));
        label->setText(QString());
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

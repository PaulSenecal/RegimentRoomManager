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

    void setupUi(QWidget *roomManager)
    {
        if (roomManager->objectName().isEmpty())
            roomManager->setObjectName("roomManager");
        roomManager->resize(1920, 1080);
        floorVariableLabel = new QLabel(roomManager);
        floorVariableLabel->setObjectName("floorVariableLabel");
        floorVariableLabel->setGeometry(QRect(70, 160, 81, 71));
        floorGroupBox = new QGroupBox(roomManager);
        floorGroupBox->setObjectName("floorGroupBox");
        floorGroupBox->setGeometry(QRect(190, 110, 371, 531));
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
        nameVariableLabel->setGeometry(QRect(690, 10, 241, 71));

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
    } // retranslateUi

};

namespace Ui {
    class roomManager: public Ui_roomManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMANAGER_H

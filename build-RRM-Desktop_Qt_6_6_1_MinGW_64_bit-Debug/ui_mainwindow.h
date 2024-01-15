/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *bat04GroupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QGroupBox *bat02GroupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *bat03GroupBox;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        bat04GroupBox = new QGroupBox(centralwidget);
        bat04GroupBox->setObjectName("bat04GroupBox");
        bat04GroupBox->setGeometry(QRect(1190, 160, 211, 561));
        bat04GroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        pushButton = new QPushButton(bat04GroupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 40, 161, 201));
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/1_RCH_1_ESC.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(134, 180));
        pushButton_4 = new QPushButton(bat04GroupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 320, 191, 151));
        pushButton_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/1_RCH_4_ESC.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(180, 146));
        bat02GroupBox = new QGroupBox(centralwidget);
        bat02GroupBox->setObjectName("bat02GroupBox");
        bat02GroupBox->setGeometry(QRect(390, 150, 221, 561));
        bat02GroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        pushButton_2 = new QPushButton(bat02GroupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 40, 201, 181));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/1_RCH_2_ESC.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(179, 180));
        pushButton_3 = new QPushButton(bat02GroupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 300, 181, 181));
        pushButton_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/1_RCH_3_ESC.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(180, 180));
        bat03GroupBox = new QGroupBox(centralwidget);
        bat03GroupBox->setObjectName("bat03GroupBox");
        bat03GroupBox->setGeometry(QRect(620, 800, 550, 221));
        bat03GroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        pushButton_6 = new QPushButton(bat03GroupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(300, 10, 181, 191));
        pushButton_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/6esc.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(180, 180));
        pushButton_5 = new QPushButton(bat03GroupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(70, 10, 161, 191));
        pushButton_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/Squadrons/images/squadron/1_RCH_ECL.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(115, 180));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(720, 30, 421, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(760, 200, 251, 131));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bat04GroupBox->setTitle(QString());
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        bat02GroupBox->setTitle(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        bat03GroupBox->setTitle(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "SELECTIONNEZ  UN ESCADRON", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

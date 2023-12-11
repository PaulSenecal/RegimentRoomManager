/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginPage
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *mdpImage;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName("loginPage");
        loginPage->resize(1920, 1080);
        loginPage->setStyleSheet(QString::fromUtf8("background-color:#D9D9D9;"));
        label = new QLabel(loginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1920, 1080));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/backgound/images/BackLoginNoPixel 1920.png")));
        groupBox = new QGroupBox(loginPage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(700, 710, 601, 201));
        groupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        mdpImage = new QLabel(groupBox);
        mdpImage->setObjectName("mdpImage");
        mdpImage->setGeometry(QRect(120, 100, 61, 61));
        mdpImage->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        mdpImage->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/mdpImg.png")));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 30, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/loginImg.png")));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 140, 261, 16));
        label_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/bar.png")));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 70, 261, 16));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/bar.png")));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 120, 261, 24));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setKerning(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("color : #014200;\n"
"background: transparent;\n"
"border: transparent;"));
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 50, 261, 21));
        QFont font1;
        font1.setPointSize(15);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color : #014200;\n"
"background: transparent;\n"
"border: transparent;"));
        pushButton = new QPushButton(loginPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(880, 940, 221, 31));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: black;\n"
"color : #014200;"));

        retranslateUi(loginPage);

        QMetaObject::connectSlotsByName(loginPage);
    } // setupUi

    void retranslateUi(QWidget *loginPage)
    {
        loginPage->setWindowTitle(QCoreApplication::translate("loginPage", "Form", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        mdpImage->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        lineEdit->setText(QCoreApplication::translate("loginPage", "test", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("loginPage", "Semaine.ECL", nullptr));
        pushButton->setText(QCoreApplication::translate("loginPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H

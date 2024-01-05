/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
    QGroupBox *inputConnectionGroupBox;
    QLabel *passWordImageLabel;
    QLabel *authImageLabel;
    QLabel *passwordkBlackLineLabel;
    QLabel *authbalckLineAuthLabel;
    QLineEdit *passWordLineEdit;
    QLineEdit *authLineEdit;
    QPushButton *ConnectionButton;

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
        inputConnectionGroupBox = new QGroupBox(loginPage);
        inputConnectionGroupBox->setObjectName("inputConnectionGroupBox");
        inputConnectionGroupBox->setGeometry(QRect(700, 710, 601, 201));
        inputConnectionGroupBox->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"background: transparent;\n"
"border-width: 2px;\n"
"border-radius: 28px;\n"
"border-color: black;"));
        passWordImageLabel = new QLabel(inputConnectionGroupBox);
        passWordImageLabel->setObjectName("passWordImageLabel");
        passWordImageLabel->setGeometry(QRect(120, 100, 61, 61));
        passWordImageLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        passWordImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/mdpImg.png")));
        authImageLabel = new QLabel(inputConnectionGroupBox);
        authImageLabel->setObjectName("authImageLabel");
        authImageLabel->setGeometry(QRect(120, 30, 51, 51));
        authImageLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        authImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/loginImg.png")));
        passwordkBlackLineLabel = new QLabel(inputConnectionGroupBox);
        passwordkBlackLineLabel->setObjectName("passwordkBlackLineLabel");
        passwordkBlackLineLabel->setGeometry(QRect(190, 140, 261, 16));
        passwordkBlackLineLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        passwordkBlackLineLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/bar.png")));
        authbalckLineAuthLabel = new QLabel(inputConnectionGroupBox);
        authbalckLineAuthLabel->setObjectName("authbalckLineAuthLabel");
        authbalckLineAuthLabel->setGeometry(QRect(190, 70, 261, 16));
        authbalckLineAuthLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        authbalckLineAuthLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/login/images/bar.png")));
        passWordLineEdit = new QLineEdit(inputConnectionGroupBox);
        passWordLineEdit->setObjectName("passWordLineEdit");
        passWordLineEdit->setGeometry(QRect(190, 120, 261, 24));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setKerning(true);
        passWordLineEdit->setFont(font);
        passWordLineEdit->setStyleSheet(QString::fromUtf8("color : #014200;\n"
"background: transparent;\n"
"border: transparent;"));
        passWordLineEdit->setEchoMode(QLineEdit::Password);
        authLineEdit = new QLineEdit(inputConnectionGroupBox);
        authLineEdit->setObjectName("authLineEdit");
        authLineEdit->setGeometry(QRect(190, 40, 261, 31));
        QFont font1;
        font1.setPointSize(15);
        authLineEdit->setFont(font1);
        authLineEdit->setStyleSheet(QString::fromUtf8("color : #014200;\n"
"background: transparent;\n"
"border: transparent;"));
        ConnectionButton = new QPushButton(loginPage);
        ConnectionButton->setObjectName("ConnectionButton");
        ConnectionButton->setGeometry(QRect(880, 940, 221, 31));
        ConnectionButton->setFont(font1);
        ConnectionButton->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
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
        inputConnectionGroupBox->setTitle(QString());
        passWordImageLabel->setText(QString());
        authImageLabel->setText(QString());
        passwordkBlackLineLabel->setText(QString());
        authbalckLineAuthLabel->setText(QString());
        passWordLineEdit->setText(QCoreApplication::translate("loginPage", "test", nullptr));
        authLineEdit->setText(QCoreApplication::translate("loginPage", "ecl.semaineh", nullptr));
        ConnectionButton->setText(QCoreApplication::translate("loginPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H

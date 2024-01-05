/********************************************************************************
** Form generated from reading UI file 'loadingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGPAGE_H
#define UI_LOADINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingPage
{
public:
    QLabel *logo;
    QProgressBar *progressBar;

    void setupUi(QWidget *LoadingPage)
    {
        if (LoadingPage->objectName().isEmpty())
            LoadingPage->setObjectName("LoadingPage");
        LoadingPage->resize(1920, 1080);
        LoadingPage->setStyleSheet(QString::fromUtf8("background-color:#D9D9D9"));
        logo = new QLabel(LoadingPage);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(480, 140, 881, 451));
        logo->setStyleSheet(QString::fromUtf8(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/regimentLogo/images/regimentLogo/rchLogo.png")));
        progressBar = new QProgressBar(LoadingPage);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(630, 610, 581, 51));
        progressBar->setStyleSheet(QString::fromUtf8("color:white;"));
        progressBar->setValue(75);
        progressBar->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        retranslateUi(LoadingPage);

        QMetaObject::connectSlotsByName(LoadingPage);
    } // setupUi

    void retranslateUi(QWidget *LoadingPage)
    {
        LoadingPage->setWindowTitle(QCoreApplication::translate("LoadingPage", "Form", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoadingPage: public Ui_LoadingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGPAGE_H

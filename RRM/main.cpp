#include "mainwindow.h"
#include "loadingPage/loadingpage.h"
#include "loginPage/loginpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //loginPage w;
    loginPage w;
    w.show();
    return a.exec();
}

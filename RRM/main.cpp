#include "loginPage/loginpage.h"
#include "manageRoom/roomManager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginPage w;
    //roomManager w;
    w.showMaximized();
    return a.exec();
}

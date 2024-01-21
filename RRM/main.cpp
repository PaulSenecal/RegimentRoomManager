#include "loginPage/loginpage.h"
#include "manageRoom/roomManager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginPage w;
    w.show();
    return a.exec();
}

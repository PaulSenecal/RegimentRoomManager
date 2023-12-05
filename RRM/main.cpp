#include "mainwindow.h"
#include "loadingpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadingPage w;
    w.show();
    return a.exec();
}

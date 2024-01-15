#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->label_2->setText(squadronSelection);
}



MainWindow::~MainWindow()
{
    delete ui;
}


/*MyMainWindow::MyMainWindow(const QString &squadron, QWidget *parent) : QMainWindow(parent)
{
    this->squadron = squadron;
}*/

void MainWindow::on_pushButton_2_clicked()//ajouter arg pour ouvrir une fenetre custom
{
    _roomManager = new roomManager;
    _roomManager = new roomManager;
    _roomManager->show();
    this->close();
    _roomManager->setWindowTitle("pseudo");
}


void MainWindow::on_pushButton_3_clicked()
{

}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_4_clicked()
{

}


void MainWindow::on_pushButton_5_clicked()
{

}


void MainWindow::on_pushButton_6_clicked()
{

}


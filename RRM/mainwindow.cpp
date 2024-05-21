#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(QWidget *parent, QString selectedSquadron)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , selectedSquadron(selectedSquadron) // Utilisation correcte du paramètre passé
{
    ui->setupUi(this);
    ui->welcomeLabel->setText("Bienvenu " + selectedSquadron);
}


MainWindow::~MainWindow()
{
    delete ui;
}


/*MyMainWindow::MyMainWindow(const QString &squadron, QWidget *parent) : QMainWindow(parent)
{
    this->squadron = squadron;
}*/
/*
void MainWindow::on_pushButton_2_clicked()//ajouter arg pour ouvrir une fenetre custom
{
    _roomManager = new roomManager;
    _roomManager = new roomManager;
    _roomManager->show();
    this->close();
    _roomManager->setWindowTitle("pseudo");
}

*/


void MainWindow::on_secondSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(0);
}


void MainWindow::on_thirdSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(1);
}


void MainWindow::on_firstSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(2);
}


void MainWindow::on_fourthSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(3);
}


void MainWindow::on_sixthSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(4);
}


void MainWindow::on_seventhSquadronButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_clicked()
{
    ui->roomManagerStackedWidget->setCurrentIndex(5);
}




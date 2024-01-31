#include "roomManager.h"
#include "ui_roomManager.h"

roomManager::roomManager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::roomManager)
{
    ui->setupUi(this);
}

roomManager::~roomManager()
{
    delete ui;
}
void roomManager::moveFloorVariable()
{//pour plustard movement floor variable
    ui->floorVariableLabel->setGeometry(70,160,81,71);/*
    ui->floorVariableLabel->setGeometry(70,160,81,71);
    ui->floorVariableLabel->setGeometry(70,160,81,71);
    ui->floorVariableLabel->setGeometry(70,160,81,71);*/
}
void roomManager::moveFloorImage()
{//pour plustard movement floor image
    ui->floor1Button->setGeometry(50,40,241,121);/*
    ui->floor1Button->setGeometry(50,40,241,121);
    ui->floor1Button->setGeometry(50,40,241,121);
    ui->floor1Button->setGeometry(50,40,241,121);*/
}




void roomManager::on_addPersonButton_clicked()
{

}


void roomManager::on_floor4Button_clicked()
{
    ui->youAreHereLabel->setGeometry(290,80,71,80);
    ui->floorVariableLabel->setGeometry(30,190,141,71);
}


void roomManager::on_floor3Button_clicked()
{

    ui->youAreHereLabel->setGeometry(290,180,71,80);
    ui->floorVariableLabel->setGeometry(30,290,141,71);
}


void roomManager::on_floor2Button_clicked()
{

    ui->youAreHereLabel->setGeometry(290,280,71,80);
    ui->floorVariableLabel->setGeometry(30,390,141,71);
}


void roomManager::on_floor1Button_clicked()
{

    ui->youAreHereLabel->setGeometry(290,380,71,80);
    ui->floorVariableLabel->setGeometry(30,490,141,71);
}


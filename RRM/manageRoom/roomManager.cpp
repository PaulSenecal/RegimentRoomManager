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
{//pour plustard
    ui->floorVariableLabel->setGeometry(70,160,81,71);/*
    ui->floorVariableLabel->setGeometry(70,160,81,71);
    ui->floorVariableLabel->setGeometry(70,160,81,71);
    ui->floorVariableLabel->setGeometry(70,160,81,71);*/
}
void roomManager::moveFloorImage()
{
    ui->floor1ImageLabel->setGeometry(50,40,241,121);/*
    ui->floor1ImageLabel->setGeometry(50,40,241,121);
    ui->floor1ImageLabel->setGeometry(50,40,241,121);
    ui->floor1ImageLabel->setGeometry(50,40,241,121);*/
}

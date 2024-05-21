#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "manageRoom/roomManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(QWidget *parent ,QString selectedSquadron);
    ~MainWindow();

private slots:
    void on_secondSquadronButton_clicked();

    void on_thirdSquadronButton_clicked();

    void on_firstSquadronButton_clicked();

    void on_fourthSquadronButton_clicked();

    void on_sixthSquadronButton_clicked();

    void on_seventhSquadronButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    roomManager * _roomManager;
    QString selectedSquadron;
};



/*
class MyMainWindow : public QMainWindow
{
    public:
        explicit MyMainWindow(const QString &squadron, QWidget *parent = nullptr);
        ~MyMainWindow();

    private:
        QString squadron;
};*/


#endif // MAINWINDOW_H

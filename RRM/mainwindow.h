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
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    roomManager * _roomManager;
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

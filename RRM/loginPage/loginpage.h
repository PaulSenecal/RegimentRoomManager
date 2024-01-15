#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "loadingPage/loadingpage.h"
#include "mainwindow.h"
#include <QMessageBox>

namespace Ui {
class loginPage;
}

class loginPage : public QWidget
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();


    QSqlDatabase connectionDataBase();
    void requestLogin(QSqlDatabase);

private slots:
    void on_ConnectionButton_clicked();

private:
    Ui::loginPage *ui;
    LoadingPage * MainLoadingPage;//uniquement pour test
    MainWindow * SelectionMainWindows;
protected:
    QString squadronChoice;
};

#endif // LOGINPAGE_H

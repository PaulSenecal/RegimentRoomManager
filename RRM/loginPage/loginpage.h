#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "loadingPage/loadingpage.h"

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
    //jai ajouter des fonctions requete mais pas encore push ni completer les fonction

private slots:
    void on_ConnectionButton_clicked();

private:
    Ui::loginPage *ui;
    LoadingPage * MainLoadingPage;
};

#endif // LOGINPAGE_H

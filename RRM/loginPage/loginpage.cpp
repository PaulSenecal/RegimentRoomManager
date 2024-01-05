#include "loginpage.h"
#include "ui_loginpage.h"

loginPage::loginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginPage)
{
    ui->setupUi(this);
}

loginPage::~loginPage()
{
    delete ui;
}




//DATABASE ACCES

QSqlDatabase loginPage::connectionDataBase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Programmation/Efrei/Diplome/RegimentRoomManager/RRM/DBSave/mydatabase.db");
    if (!db.open()) {
        qDebug() << "Impossible d'ouvrir la base de données";

    }
    return db;
}
void loginPage::requestLogin(QSqlDatabase a)
{
    QSqlDatabase db = a;
    if(db.isOpen()){
        QSqlQuery query;
        QString pseudo = ui->authLineEdit->text(),
            password = ui->passWordLineEdit->text(),
            savedPassword;

        ui->ConnectionButton->setEnabled(false);
        ui->ConnectionButton->setText("Connexion...");

        query.prepare("SELECT  password FROM admin WHERE login = ?");
        query.addBindValue(pseudo);
        if (query.exec() && query.next()) {
            savedPassword = query.value(0).toString();

            if(savedPassword == password){
                MainLoadingPage = new LoadingPage;
                MainLoadingPage->show();
                this->close();
                MainLoadingPage->setWindowTitle(pseudo);
                this->~loginPage();
            }
            else{
                qDebug() << "formulaire incorrect";

                ui->ConnectionButton->setText("Connexion");
                ui->ConnectionButton->setEnabled(true);
            }
        }
    }
    else
    {
        qDebug() << "erreur de connexion a la DB";
    }
}
void loginPage::on_ConnectionButton_clicked()
{
    QString log = ui->authLineEdit->text();
    QString password = ui->passWordLineEdit->text();
    connectionDataBase();
    requestLogin(connectionDataBase());
    qDebug() << log + password;

}


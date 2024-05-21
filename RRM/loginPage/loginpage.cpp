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
        QMessageBox::information(this, "Erreur de connection", "impossible de se connecter a la base de donnée , Veuillez contacter votre administrateur system");

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
                this->squadronChoice=pseudo;
                SelectionMainWindows = new MainWindow(nullptr,pseudo);
                SelectionMainWindows->showMaximized();
                this->close();
                SelectionMainWindows->setWindowTitle(pseudo);
                this->~loginPage();
            }
            else
            {
                QMessageBox::information(this, "Erreur", "Pseudo/Mots de passe inccorect");
                ui->ConnectionButton->setText("Connexion");
                ui->ConnectionButton->setEnabled(true);
            }
        }
        else{
            QMessageBox::information(this, "Erreur", "Pseudo/Mots de passe inccorect");
            ui->ConnectionButton->setText("Connexion");
            ui->ConnectionButton->setEnabled(true);
        }
    }
    else
    {
        QMessageBox::information(this, "Erreur de connection", "impossible de se connecter a la base de donnée , Veuillez contacter votre administrateur system");
    }
}
void loginPage::on_ConnectionButton_clicked()
{
    connectionDataBase();
    requestLogin(connectionDataBase());
}

#include "loadingpage.h"
#include "ui_loadingpage.h"

LoadingPage::LoadingPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoadingPage)
{
    setBarValue(75);
    ui->setupUi(this);
    ui->progressBar->setVisible(true);
    ui->progressBar->setTextVisible(true);
   // ui->progressBar->setFormat("Loading...");
    ui->progressBar->setAlignment(Qt::AlignCenter);
    ui->progressBar->setStyleSheet("QProgressBar {"
                                  "border: 2px solid black;"
                                  "background-color: #D9D9D9;"
                                   "color:white;"
                                   "font-size:40px;"
                                   "}"
                                  "QProgressBar::chunk {"
                                  "background-color: #000000;"
                                  "}");
    ui->progressBar->setValue(getBarValue());
    if(getBarValue()==100)
    {
        ui->progressBar->setStyleSheet("QProgressBar {"
                                       "border: 2px solid black;"
                                       "background-color: #D9D9D9;"
                                        "color:white;"
                                        "font-size:40px;"
                                        "}"
                                      "QProgressBar::chunk {"
                                      "background-color: #014200;"
                                      "}");
    }
}

LoadingPage::~LoadingPage()
{
    delete ui;
}
void LoadingPage::setBarValue(int value)
{
    this->barValue = value;
}
int LoadingPage::getBarValue()
{
    return this->barValue;
}



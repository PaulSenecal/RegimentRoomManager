#ifndef LOADINGPAGE_H
#define LOADINGPAGE_H

#include <QWidget>
#include <QProgressBar>
#include <QLabel>


namespace Ui {
class LoadingPage;
}

class LoadingPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoadingPage(QWidget *parent = nullptr);
    ~LoadingPage();
    void setBarValue(int);
    int getBarValue();


private:
    Ui::LoadingPage *ui;
    QProgressBar *test;
    QLabel *logo;
    int barValue;
};

#endif // LOADINGPAGE_H

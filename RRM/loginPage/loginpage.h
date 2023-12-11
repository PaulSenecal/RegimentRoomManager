#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>

namespace Ui {
class loginPage;
}

class loginPage : public QWidget
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();

private:
    Ui::loginPage *ui;
};

#endif // LOGINPAGE_H

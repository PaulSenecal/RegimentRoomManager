#ifndef ROOMMANAGER_H
#define ROOMMANAGER_H

#include <QWidget>

namespace Ui {
class roomManager;
}

class roomManager : public QWidget
{
    Q_OBJECT

public:
    explicit roomManager(QWidget *parent = nullptr);
    ~roomManager();
    void moveFloorVariable();
    void moveFloorImage();

private slots:
    void on_addPersonButton_clicked();

    void on_floor4Button_clicked();

    void on_floor3Button_clicked();

    void on_floor2Button_clicked();

    void on_floor1Button_clicked();

private:
    Ui::roomManager *ui;
};

#endif // ROOMMANAGER_H

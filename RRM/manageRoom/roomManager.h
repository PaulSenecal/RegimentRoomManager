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

private:
    Ui::roomManager *ui;
};

#endif // ROOMMANAGER_H

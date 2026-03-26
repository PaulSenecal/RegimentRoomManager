#ifndef ROOMMANAGER_H
#define ROOMMANAGER_H

#include <QWidget>
#include <QMap>
#include "DatabaseManager.h"

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
    void updateRoomDisplay(int floor);

private slots:
    void on_floor4Button_clicked();
    void on_floor3Button_clicked();
    void on_floor2Button_clicked();
    void on_floor1Button_clicked();
    void onRoomClicked();

private:
    Ui::roomManager *ui;
    DatabaseManager* db;
    int currentFloor;
    QMap<int, QWidget*> roomWidgets;

    void setupRooms();
    void createRoomWidget(int floor, int roomNumber, int capacity);
    void updateRoomStatus(int roomId);
    void showAddPersonDialog(int roomId);
    void showAddProblemDialog(int roomId);
    void showRoomHistory(int roomId);
};

#endif // ROOMMANAGER_H

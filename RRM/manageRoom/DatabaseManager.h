#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QDateTime>
#include <QString>

class DatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager();

    bool initializeDatabase();
    
    // Gestion des chambres
    bool addRoom(int floor, int roomNumber, int capacity);
    bool updateRoomStatus(int roomId, const QString& status);
    
    // Gestion des occupants
    bool addOccupant(int roomId, const QString& name, const QString& rank, 
                     const QDateTime& startDate, const QDateTime& endDate);
    bool removeOccupant(int occupantId);
    QList<QPair<QString, QDateTime>> getRoomHistory(int roomId);
    
    // Gestion des problèmes
    bool addProblem(int roomId, const QString& description, const QDateTime& reportDate);
    bool resolveProblem(int problemId, const QDateTime& resolveDate);
    
    // Requêtes
    QList<QPair<int, QString>> getRoomsOnFloor(int floor);
    QString getRoomStatus(int roomId);
    int getCurrentOccupancy(int roomId);

    // Gestion des sauvegardes
    bool backupDatabase(const QString& backupName);
    bool restoreDatabase(const QString& backupName);
    QStringList getBackupsList() const;

private:
    QSqlDatabase db;
    bool createTables();
    QString getBackupPath(const QString& backupName) const;
};

#endif // DATABASEMANAGER_H 
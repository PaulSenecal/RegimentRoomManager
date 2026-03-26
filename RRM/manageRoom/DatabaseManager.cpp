#include "DatabaseManager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QFileInfo>

DatabaseManager::DatabaseManager(QObject *parent)
    : QObject(parent)
{
    // Créer le dossier DBSave s'il n'existe pas
    QDir dir;
    if (!dir.exists("DBSave")) {
        dir.mkdir("DBSave");
    }

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("DBSave/RRM.db");
}

DatabaseManager::~DatabaseManager()
{
    if (db.isOpen())
        db.close();
}

bool DatabaseManager::initializeDatabase()
{
    if (!db.open()) {
        qDebug() << "Erreur lors de l'ouverture de la base de données:" << db.lastError().text();
        return false;
    }
    return createTables();
}

bool DatabaseManager::createTables()
{
    QSqlQuery query;
    
    // Table des chambres
    if (!query.exec("CREATE TABLE IF NOT EXISTS rooms ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "floor INTEGER NOT NULL,"
                   "room_number INTEGER NOT NULL,"
                   "capacity INTEGER NOT NULL,"
                   "status TEXT DEFAULT 'Non Occuper',"
                   "UNIQUE(floor, room_number))")) {
        qDebug() << "Erreur création table rooms:" << query.lastError().text();
        return false;
    }
    
    // Table des occupants
    if (!query.exec("CREATE TABLE IF NOT EXISTS occupants ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "room_id INTEGER NOT NULL,"
                   "name TEXT NOT NULL,"
                   "rank TEXT NOT NULL,"
                   "start_date DATETIME NOT NULL,"
                   "end_date DATETIME NOT NULL,"
                   "FOREIGN KEY(room_id) REFERENCES rooms(id))")) {
        qDebug() << "Erreur création table occupants:" << query.lastError().text();
        return false;
    }
    
    // Table des problèmes
    if (!query.exec("CREATE TABLE IF NOT EXISTS problems ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "room_id INTEGER NOT NULL,"
                   "description TEXT NOT NULL,"
                   "report_date DATETIME NOT NULL,"
                   "resolve_date DATETIME,"
                   "FOREIGN KEY(room_id) REFERENCES rooms(id))")) {
        qDebug() << "Erreur création table problems:" << query.lastError().text();
        return false;
    }
    
    return true;
}

bool DatabaseManager::addRoom(int floor, int roomNumber, int capacity)
{
    QSqlQuery query;
    query.prepare("INSERT OR IGNORE INTO rooms (floor, room_number, capacity) "
                 "VALUES (:floor, :room_number, :capacity)");
    query.bindValue(":floor", floor);
    query.bindValue(":room_number", roomNumber);
    query.bindValue(":capacity", capacity);
    return query.exec();
}

bool DatabaseManager::updateRoomStatus(int roomId, const QString& status)
{
    QSqlQuery query;
    query.prepare("UPDATE rooms SET status = :status WHERE id = :id");
    query.bindValue(":status", status);
    query.bindValue(":id", roomId);
    return query.exec();
}

bool DatabaseManager::addOccupant(int roomId, const QString& name, const QString& rank,
                                const QDateTime& startDate, const QDateTime& endDate)
{
    QSqlQuery query;
    query.prepare("INSERT INTO occupants (room_id, name, rank, start_date, end_date) "
                 "VALUES (:room_id, :name, :rank, :start_date, :end_date)");
    query.bindValue(":room_id", roomId);
    query.bindValue(":name", name);
    query.bindValue(":rank", rank);
    query.bindValue(":start_date", startDate);
    query.bindValue(":end_date", endDate);
    return query.exec();
}

QList<QPair<QString, QDateTime>> DatabaseManager::getRoomHistory(int roomId)
{
    QList<QPair<QString, QDateTime>> history;
    QSqlQuery query;
    query.prepare("SELECT name, start_date FROM occupants WHERE room_id = :room_id "
                 "ORDER BY start_date DESC");
    query.bindValue(":room_id", roomId);
    
    if (query.exec()) {
        while (query.next()) {
            history.append(qMakePair(query.value(0).toString(),
                                   query.value(1).toDateTime()));
        }
    }
    return history;
}

bool DatabaseManager::addProblem(int roomId, const QString& description, const QDateTime& reportDate)
{
    QSqlQuery query;
    query.prepare("INSERT INTO problems (room_id, description, report_date) "
                 "VALUES (:room_id, :description, :report_date)");
    query.bindValue(":room_id", roomId);
    query.bindValue(":description", description);
    query.bindValue(":report_date", reportDate);
    return query.exec();
}

QList<QPair<int, QString>> DatabaseManager::getRoomsOnFloor(int floor)
{
    QList<QPair<int, QString>> rooms;
    QSqlQuery query;
    query.prepare("SELECT room_number, status FROM rooms WHERE floor = :floor "
                 "ORDER BY room_number");
    query.bindValue(":floor", floor);
    
    if (query.exec()) {
        while (query.next()) {
            rooms.append(qMakePair(query.value(0).toInt(),
                                 query.value(1).toString()));
        }
    }
    return rooms;
}

QString DatabaseManager::getRoomStatus(int roomId)
{
    QSqlQuery query;
    query.prepare("SELECT status FROM rooms WHERE id = :id");
    query.bindValue(":id", roomId);
    
    if (query.exec() && query.next()) {
        return query.value(0).toString();
    }
    return QString();
}

int DatabaseManager::getCurrentOccupancy(int roomId)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM occupants "
                 "WHERE room_id = :room_id "
                 "AND start_date <= CURRENT_TIMESTAMP "
                 "AND end_date >= CURRENT_TIMESTAMP");
    query.bindValue(":room_id", roomId);
    
    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return 0;
} 
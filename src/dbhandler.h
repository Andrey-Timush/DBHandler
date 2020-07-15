#ifndef CDB_H
#define CDB_H
#include <QSqlDatabase>
#include <QtGlobal>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QString>

class dbhandler : public QObject
{
public:
    dbhandler();
    static void connectDatabase();
    static void createStructure(const QString &structure);
    static void addRecord(const QString &structure);
    static void removeRecord(const QString &structure);
};

#endif // CDB_H

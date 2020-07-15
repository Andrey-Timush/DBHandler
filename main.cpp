#include <QCoreApplication>
#include <dbhandler.h>
#include <jsonconf.h>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    dbhandler db;

    db.connectDatabase();

    QString structure = "CREATE TABLE IF NOT EXIST testTable(id int primary key,name varchar(8),secondName varchar(80))";

    db.createStructure(structure);

    QString structure2 = "INSERT INTO testTable (id, name, secondName) "
                         "VALUES (1002, 'Ivan', 'Ivanov')";
    db.addRecord(structure2);

    QString structure3 = "INSERT INTO testTable (id, name, secondName) "
                         "VALUES (1003, 'Ivan1', 'Ivanov1')";
    db.addRecord(structure3);

    QString structure4 = "DELETE FROM testTable WHERE id = 1001";

    db.removeRecord(structure4);

//    QSqlDatabase database;

//    if ( database.tables().contains( QLatin1String("db") )) {
//        qDebug() << "This table exist!";
//    }
//    else {
//        qDebug() << "Not exist!";
//    }

    return a.exec();
}




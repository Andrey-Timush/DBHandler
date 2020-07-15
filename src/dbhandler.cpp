#include "dbhandler.h"

dbhandler::dbhandler()
{

}

void dbhandler::connectDatabase(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort( 5432 );
    db.setDatabaseName("db");
    db.setUserName("postgres");
    db.setPassword( "1111" );
    bool ok = db.open();

    if (ok) {
        qDebug() <<"Connected!";
    }
    else {
        qDebug()<<"Not connected!";
    }
}

void dbhandler::createStructure(const QString &structure) {

    QSqlQuery query;
    query.exec(structure);

}

void dbhandler::addRecord(const QString &structure){
    QSqlQuery query;
    query.exec(structure);
}


void dbhandler::removeRecord(const QString &structure){

    QSqlQuery query;
    query.exec(structure);
}





#ifndef DATEBASEHANDLER_H
#define DATEBASEHANDLER_H
#include <QDebug>
#include <QByteArray>
#include <QTextStream>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QFile>
#include <QMutex>
#include <QMutexLocker>
#include <QThread>
#include <QDebug>
#include <QRandomGenerator>
#include "logger.h"

class DataBasaHandler
{
public:
    static DataBasaHandler *DataBaseHandlerInstance();
    DataBasaHandler(const DataBasaHandler&)=delete;
    void operator =(const DataBasaHandler&)=delete;
    //response methods:
    QJsonObject logIn(QJsonObject data);
    QJsonObject getAccount_Number(QJsonObject data);
    QJsonObject viewAccount_Balance(QJsonObject data);
    QJsonObject viewTransaction_History(QJsonObject data);
    QJsonObject makeTransaction(QJsonObject data);
    QJsonObject transferAmount(QJsonObject data);
    QJsonObject viewBankDB();
    QJsonObject createUser(QJsonObject data);
    QJsonObject deleteUser(QJsonObject data);
    QJsonObject updateUser(QJsonObject data);

private:
    DataBasaHandler();
   void initilaize();
    QFile *DataBaseFile;
    Logger *DBLogger;
    QMutex * globalMutex;// maybe changed.
    static qint16 userID;
    QRandomGenerator randomNumGen;
};

#endif // DATEBASEHANDLER_H

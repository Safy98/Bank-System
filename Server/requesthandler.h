#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QMutex>
#include "logger.h"
#include "datebasehandler.h"

class requestHandler
{
public:
    requestHandler(QMutex * globalMutex );
    QByteArray handleReaquest(QByteArray request);


private:
    enum requestIDs{LogIn_ID, CreateUser_ID, GetAccuont_ID, DeleteUser_ID, UpDateUser_ID, ViewTransactionHistory_ID, ViewBankDB_ID, GetBalance_ID, MakeTransaction_ID, TransferAmount_ID};
    Logger *requestLogs;
    DataBasaHandler * dataBaseManager;
    QMutex * globalMutex ;
};

#endif // REQUESTHANDLER_H

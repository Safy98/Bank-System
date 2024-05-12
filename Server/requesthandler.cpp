#include "requesthandler.h"

requestHandler::requestHandler(QMutex * globalMutex)
{
    requestLogs = new Logger("./requsetLogs.log");
    this->globalMutex = globalMutex;
    dataBaseManager =DataBasaHandler::DataBaseHandlerInstance();
}

QByteArray requestHandler::handleReaquest(QByteArray request)
{
    QJsonDocument doc = QJsonDocument::fromJson(request);

    QJsonObject requestObj = doc.object();

    QByteArray response;
    QJsonObject DB_response;


    int processID = requestObj.value("RequestID").toString().toInt();

    switch(processID)
    {
    case LogIn_ID:

        globalMutex->lock();
        DB_response = dataBaseManager->logIn(requestObj);
        globalMutex->unlock();
        break;

     case CreateUser_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->createUser(requestObj);
        globalMutex->unlock();
        break;

    case GetAccuont_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->getAccount_Number(requestObj);
        globalMutex->unlock();
        break;

    case DeleteUser_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->deleteUser(requestObj);
        globalMutex->unlock();
         break;

    case UpDateUser_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->updateUser(requestObj);
        globalMutex->unlock();

        break;
    case ViewTransactionHistory_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->viewTransaction_History(requestObj);
        globalMutex->unlock();
        break;

    case ViewBankDB_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->viewBankDB();
        globalMutex->unlock();
        break;

    case GetBalance_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->viewAccount_Balance(requestObj);
        globalMutex->unlock();
        break;

    case MakeTransaction_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->makeTransaction(requestObj);
        globalMutex->unlock();
        break;

    case TransferAmount_ID:
        globalMutex->lock();
        DB_response = dataBaseManager->transferAmount(requestObj);
        globalMutex->unlock();
        break;


    
    }
    QJsonDocument docResponse(DB_response);
    response = docResponse.toJson();
    return response;
}

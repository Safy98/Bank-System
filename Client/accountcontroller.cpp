#include "accountcontroller.h"

AccountController::AccountController(QObject *parent)
    : QObject{parent}
{

}

AccountController::~AccountController()
{
    //TcpController has parent-child relationship so will be destryed automatically
}

void AccountController::run()
{

    // so the thread stays alive always until the program is closed
    QEventLoop loop;

    tcpController = new TcpController(this);
    connect(tcpController,&TcpController::ResponseReady,this,&AccountController::retriveResponse);
    connect(tcpController,&TcpController::connectedSignal,this,&AccountController::connectedSignal);
    connect(tcpController,&TcpController::disconnectedSignal,this,&AccountController::disconnectedSignal);



    loop.exec();
}

void AccountController::sendRequest(QJsonObject request)
{


    //uses the validator to validate all the requests before sending them to the server
    int validationState =  validator.validateRequest(request);

    //valid request
    if( validationState == 0)
    {
        request.remove("ConfPassword");
        QJsonDocument doc(request);
        tcpController->makeTcpRequest(doc.toJson());

    }
    else
    {    //invalid request

        QJsonObject response;
        response["ResponseID"]=request.value("RequestID").toString();
        response["State"]=false;
        response["Reason"]=QString::number(validationState);
        emit sendResponseBack(response);
    }



}

void AccountController::retriveResponse(QByteArray response)
{
    QJsonDocument responseDoc = QJsonDocument::fromJson(response);

    QJsonObject responseobj = responseDoc.object();
    qInfo()<<QThread::currentThread();

    // this signal invokes the responseReady slot in the windowManger object
    emit sendResponseBack(responseobj);
}


void AccountController::requestConnection()
{
    tcpController->makeConnection();


}

void AccountController::requestDisconnection()
{
    tcpController->closeConnection();
    qInfo()<<QThread::currentThread();


}

void AccountController::connectedSignal()
{
    QJsonObject response;
    response["ResponseID"]="-1";
    // this signal invokes the responseReady slot in the windowManger object
    emit sendResponseBack(response);
}

void AccountController::disconnectedSignal()
{
    QJsonObject response;
    response["ResponseID"]="-2";
    qInfo()<<QThread::currentThread();
    // this signal invokes the responseReady slot in the windowManger object
    emit sendResponseBack(response);

}



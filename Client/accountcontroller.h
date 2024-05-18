#ifndef ACCOUNTCONTROLLER_H
#define ACCOUNTCONTROLLER_H

#include <QObject>
#include <QEventLoop>
#include <QJsonDocument>
#include <QJsonObject>
#include "tcpcontroller.h"
#include "requestvalidator.h"

class AccountController : public QObject
{
    Q_OBJECT
public:
    explicit AccountController(QObject *parent = nullptr);

    ~AccountController();


    //this function will be running on a seperate thread
    void run();

public slots:

    //this slot receives the request from the windowManger object
    void sendRequest(QJsonObject request);

    //this slot receives the response from the TcpController object
    void retriveResponse(QByteArray response);

    //invoked by the windowManger signal with the same name, uses theTcpController object to establis
    // connection  to the server
    void requestConnection(QString ip);

    //invoked by the windowManger signal with the same name, uses theTcpController object to 
    // disconnect from the server 
    void requestDisconnection();

    //invoked by the theTcpController object signal with the same name, and it will send emit 
    // a signal to the windowManger to inform it that connection has been made with the server
    void connectedSignal();

    //invoked by the theTcpController object signal with the same name, and it will send emit 
    // a signal to the windowManger to inform it that it disconnected from the server
    void disconnectedSignal();


signals:

    // the only signal that sends data to the windowManger object , it's emitted by all the above slots 
    // with diffrent input 
    void sendResponseBack(QJsonObject response);

private:

    TcpController* tcpController;
    RequestValidator validator;
};

#endif // ACCOUNTCONTROLLER_H

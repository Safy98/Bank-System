#include "tcpcontroller.h"

TcpController::TcpController(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket;

    connect(socket,&QTcpSocket::readyRead,this,&TcpController::readyRead);
    connect(socket,&QTcpSocket::connected,this,&TcpController::connected);
    connect(socket,&QTcpSocket::errorOccurred,this,&TcpController::errorOccurred);
    connect(socket,&QTcpSocket::stateChanged,this,&TcpController::stateChanged);
    connect(socket,&QTcpSocket::disconnected,this,&TcpController::disconnected);




}

TcpController::~TcpController()
{
    delete socket;
}

void TcpController::makeTcpRequest(QByteArray request)
{

    //check if connected
    if(socket->state() == QAbstractSocket::ConnectedState){
        socket->write(request);
        socket->waitForBytesWritten();
    }
    

}

void TcpController::makeConnection(QString ip)
{

    socket->connectToHost(ip,2222);
}

void TcpController::closeConnection()
{
    if(socket->isOpen())
    {

        socket->disconnectFromHost();
        socket->waitForDisconnected(500);

    }

}

void TcpController::readyRead()
{
    QByteArray response =socket->readAll();

    emit ResponseReady(response);

}

void TcpController::connected()
{
    qInfo()<<"connected";

}

void TcpController::disconnected()
{
    qInfo()<<"disconnected";

    // emit disconnectedSignal();

}

void TcpController::errorOccurred(QAbstractSocket::SocketError socketError)
{
    qInfo()<<"errorOccurred: "<<socket->errorString();

}

void TcpController::hostFound()
{
    qInfo()<<"hostFound";
}

void TcpController::stateChanged(QAbstractSocket::SocketState socketState)
{
    qInfo()<<"stateChanged: "<<socket->state();


    if(socketState == QAbstractSocket::ConnectedState)
    {
        emit connectedSignal();

    }
    else if(socketState == QAbstractSocket::UnconnectedState)
    {
        emit disconnectedSignal();

    }










}

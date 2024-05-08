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

void TcpController::makeTcpRequest(QByteArray request)
{
    qInfo()<<"tcp thread "<<QThread::currentThread();

    //check if connected
    if(socket->state() == QAbstractSocket::ConnectedState){
        socket->write(request);
        socket->waitForBytesWritten();
    }
    qInfo()<<QThread::currentThread();
    qInfo()<<"hi";
    qInfo()<<QThread::currentThread();

}

void TcpController::makeConnection()
{
    qInfo()<<"clicked2";

    qInfo()<<QThread::currentThread();

    socket->connectToHost("127.0.0.1",2222);
}

void TcpController::closeConnection()
{
    if(socket->isOpen())
    {
        qInfo()<<"clicked3";

        socket->disconnectFromHost();
        socket->waitForDisconnected(500);

    }
    qInfo()<<QThread::currentThread();

}

void TcpController::readyRead()
{
    QByteArray response =socket->readAll();

    emit ResponseReady(response);
    qInfo()<<QThread::currentThread();

}

void TcpController::connected()
{
    qInfo()<<"connected";
    qInfo()<<QThread::currentThread();

}

void TcpController::disconnected()
{
    qInfo()<<"disconnected";
    qInfo()<<QThread::currentThread();

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
        qInfo()<<"hi";
        emit disconnectedSignal();

    }










}

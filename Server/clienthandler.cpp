#include "clienthandler.h"

ClientHandler::ClientHandler( QMutex * globalMutex ,qintptr socketDescriptor, QObject *parent)
    : QObject{parent}, m_socketDescriptor{socketDescriptor}
{
    ClientLogs = new Logger("./ClientLogs.log");
    l_handler = new requestHandler( globalMutex ); //it have to changed to be QObject to use parent child or destroy it with a destructor

}

ClientHandler::~ClientHandler()
{

    ClientLogs->log("socket has disconnected..");
    ClientLogs->log("ClientHandler is deleted");
    qInfo()<<"the client: "<<m_socketDescriptor<<" has disconnected ";

    
    delete socket;
    delete l_handler;

}

void ClientHandler::disconnected()
{


}

void ClientHandler::readyRead()
{
    QByteArray data = socket->readAll();

    //syncronus call that reaches the DataBase
    QByteArray l_response = l_handler->handleReaquest(data);

    socket->write(l_response);
    socket->waitForBytesWritten();


}

void ClientHandler::run()
{
    socket = new QTcpSocket();

    // to keep the thread alive
    QEventLoop loop;

    // to tell the socket which client it needs to communicate with
    //the socket descriptor comes from the os and is uniqe for each connection
    if(!socket->setSocketDescriptor(m_socketDescriptor))
    {
        ClientLogs->log("Failed to connect to the client ");
        ClientLogs->log(socket->errorString());

        delete socket;
        return;
    }

    qInfo()<<"serving the client: "<<m_socketDescriptor<<" on:  "<<QThread::currentThread();
    /*we use Qt::DirectConnection when we connect signals and slots to
    ensure that slots will be invoked in the singling thread.*/

    /* when the clients disconnects the event loop will quit and the run method will treminate
        and since the setAutoDelete is enabled in the incomingConnection method of the  server
        ,the QThreadPool will delete the Clienthandler object automatically   */
    connect(socket, &QTcpSocket::disconnected, &loop, &QEventLoop::quit, Qt::DirectConnection);



    // to read the data from the socket buffer when it's ready
    connect(socket, &QTcpSocket::readyRead, this, &ClientHandler::readyRead, Qt::DirectConnection);



    loop.exec();
}

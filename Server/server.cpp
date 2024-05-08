#include "server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent}
{
    pool = new QThreadPool(this);
    pool->setMaxThreadCount(200);
    globalMutex = new QMutex;
    ServerLogs = new Logger("./serverLogs");

    /* the dataBaseManger class is singelton so it's created one her to create it in the heap
    and then each the request handler from multiple threads can't instaiate it again and
    will get the address of the only existing dataBaseManger */
    dataBaseManger =  DataBasaHandler::DataBaseHandlerInstance();
}

Server::~Server()
{
    ServerLogs->log("destroying the server object along with its resources ");

    // free every reserved resource in the heap
    delete globalMutex;
    delete pool;
    delete ServerLogs;
    // the server is responsiple for the creatinon and free of the singleton DataBase manger
    delete dataBaseManger;

}

void Server::startServer(qint16 port)
{
    if(!this->listen(QHostAddress::Any, port))
    {
        ServerLogs->log("Faild to Initialzie server!!");
        qInfo() << this->errorString();
        return;
    }
    ServerLogs->log ("Listening on port: " + QString::number(port));
    qInfo() << ("Listening on port: " + QString::number(port));
}



void Server::quitServer()
{
    ServerLogs->log("Closing server...");
    this->close();
}

void Server::incomingConnection(qintptr handle)
{
    qInfo()<<"incoming";
    ServerLogs->log("new incoming connection");
    ClientHandler *handler = new ClientHandler(globalMutex,handle,this);
    handler->setAutoDelete(true);
    pool->start(handler);
}


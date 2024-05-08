#include <QCoreApplication>
#include "server.h"
#include "logger.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Server myServer;


    myServer.startServer(2222);

    return a.exec();
}

// #include <QCoreApplication>
// #include "server.h"

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     MyServer server;
//     server.StartServer();

//     return a.exec();
// }

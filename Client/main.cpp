#include "client.h"
#include <QApplication>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    // no need to free since the program will be treminated and the memory freed for all the program
    Client& client =  Client::ClientInstance();


    return a.exec();
}

#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QThreadPool>
#include <QMutex>
#include "logger.h"
#include "clienthandler.h"
#include "datebasehandler.h"


// Inherits QTcpServer to override its protected function "incomingConnection"
class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    ~Server();
signals:

public slots:
    void startServer(qint16 port);
    void quitServer();


protected:

    void incomingConnection(qintptr handle) Q_DECL_OVERRIDE;

private:
    QThreadPool *pool;
    Logger *ServerLogs;

    /*this mutex is created once here in the server and
      passed to each created thread which will pass it to
    its own  requesthandler object to lock it when it needs to access the database*/
    QMutex * globalMutex;
    DataBasaHandler  * dataBaseManger;
};


#endif // SERVER_H

#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H

#include <QObject>
#include <QRunnable>
#include <QTcpSocket>
#include <QEventLoop>
#include <QThread>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMutex>
#include <QFile>

#include "logger.h"
#include "requesthandler.h"

class ClientHandler : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit ClientHandler(QMutex * globalMutex ,qintptr socketDescriptor = 0, QObject *parent = nullptr);
    ~ClientHandler();
private:
    qintptr m_socketDescriptor;
    QTcpSocket *socket;
    Logger *ClientLogs;
    requestHandler *l_handler;
    QMutex * globalMutex ;

private slots:
    void disconnected();
    void readyRead();

    // QRunnable interface
public:
    void run() Q_DECL_OVERRIDE;
};



#endif // CLIENTHANDLER_H

#ifndef TCPCONTROLLER_H
#define TCPCONTROLLER_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QByteArray>
class TcpController : public QObject
{
    Q_OBJECT
public:
    explicit TcpController(QObject *parent = nullptr);
    ~TcpController();

    void makeTcpRequest(QByteArray request);
    void makeConnection();
    void closeConnection();

signals:
   void ResponseReady(QByteArray response);
   void connectedSignal();
   void disconnectedSignal();


private slots:
    void readyRead(void);

    void connected();
    void disconnected();
    void errorOccurred(QAbstractSocket::SocketError socketError);
    void hostFound();
    void stateChanged(QAbstractSocket::SocketState socketState);

private:
    QTcpSocket * socket;

};

#endif // TCPCONTROLLER_H

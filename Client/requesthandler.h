#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <QObject>
#include <QJsonObject>
class RequestHandler : public QObject
{
    Q_OBJECT
public:
    explicit RequestHandler(QObject *parent = nullptr);

signals:
    void sendRequest(QJsonObject data);
public slots:
    void makeRequest(QJsonObject Request);
    void recieveResponse(QJsonObject Response);
signals:
};

#endif // REQUESTHANDLER_H

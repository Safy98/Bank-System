#ifndef RESPONSEHANDLER_H
#define RESPONSEHANDLER_H

#include <QObject>
#include <QJsonObject>
class ResponseHandler : public QObject
{
    Q_OBJECT
public:
    explicit ResponseHandler(QObject *parent = nullptr);

public slots:
    void handleResponse(QJsonObject response);

signals:
};

#endif // RESPONSEHANDLER_H

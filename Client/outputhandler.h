#ifndef OUTPUTHANDLER_H
#define OUTPUTHANDLER_H

#include <QObject>
#include <QDebug>
class OutPutHandler : public QObject
{
    Q_OBJECT
public:
    explicit OutPutHandler(QObject *parent = nullptr);

signals:
    void failedLoginSignal(int errorState);

public slots:
    void failedLoginSlot(int errorState);


};

#endif // OUTPUTHANDLER_H

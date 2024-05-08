#include "outputhandler.h"

OutPutHandler::OutPutHandler(QObject *parent)
    : QObject{parent}
{}

void OutPutHandler::failedLoginSlot(int errorState)
{
    qInfo()<<"failedLoginSlot";
    emit failedLoginSignal(errorState);
}

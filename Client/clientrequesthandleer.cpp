#include "clientrequesthandleer.h"

ClientRequestHandleer *ClientRequestHandleer::CRHInstance(QObject *parent)
{
    static ClientRequestHandleer * instance = new ClientRequestHandleer(parent);

    return instance;

}

void ClientRequestHandleer::sendClientRequest(QByteArray request)
{

}

ClientRequestHandleer::ClientRequestHandleer(QObject *parent)
    : QObject{parent}
{}

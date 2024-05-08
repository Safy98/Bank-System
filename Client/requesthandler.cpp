#include "requesthandler.h"

RequestHandler::RequestHandler(QObject *parent)
    : QObject{parent}
{

}

void RequestHandler::makeRequest(QJsonObject Request)
{


    emit sendRequest(Request);
}

void RequestHandler::recieveResponse(QJsonObject Response)
{

}

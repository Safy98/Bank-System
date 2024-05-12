#include "client.h"

/// @brief creates Client object if no Client instance has been created , otherwise returns reffernce to the existing object
/// @param parent pointer to the parent object
/// @return refrence to the only Client object in the system
Client& Client::ClientInstance(QObject *parent)
{
    static Client *instance = new Client(parent);


    return *instance;
}



Client::Client(QObject *parent)
    : QObject{parent}
{
    //creates single instance of the WIndowManger which is also a singleton since 1 manger is needed 
    windowManger = WindowManager::WindowManagerInstance(this);


    QThread *clientThread = new QThread(this);

    // when the thread finishes it will be scheduled for deletion
    connect(clientThread,&QThread::finished,clientThread,&QThread::deleteLater);

    // this object is responible for all the logic before sending the data to the server 
    accountController = new AccountController();

    //launching it on seperate thread so the main GUI stays responsive
    accountController->moveToThread(clientThread);

    // to be able to send the data from the windowManger to the accountController
    connect(windowManger,&WindowManager::makeRequest,accountController,&AccountController::sendRequest);

    // so the windowManger will be able to receive the data from  the accountController
    connect(accountController,&AccountController::sendResponseBack,windowManger,&WindowManager::responseReady);

    // special request , the accountController will just try to connect to the server
    connect(windowManger,&WindowManager::requestConnection,accountController,&AccountController::requestConnection);

    // special request , the accountController will  disconnect from the server
    connect(windowManger,&WindowManager::requestDisconnection,accountController,&AccountController::requestDisconnection);


    
    connect(clientThread,&QThread::started,accountController,&AccountController::run);


    //starts the seperate logic thread
    clientThread->start();

}

Client::~Client()
{
    // each alocation is freed
    delete accountController;
    delete windowManger;
}







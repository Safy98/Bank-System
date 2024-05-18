#include "windowmanager.h"

WindowManager *WindowManager::WindowManagerInstance(QObject *parent)
{
    static WindowManager * instance= new WindowManager(parent);


    return instance;
}

WindowManager::WindowManager(QObject *parent)
    : QObject{parent}
{
    adminUI = nullptr;
    userUI = nullptr;
    createMainUI();
}

void WindowManager::responseReady(QJsonObject Data)
{

    int responeID = Data.value("ResponseID").toString().toInt();
    switch(responeID)
    {

    case -1 :
        if(adminUI!=nullptr)
        {
            adminUI->responseReady(Data);


        }
        else if(userUI!=nullptr)
        {
            userUI->responseReady(Data);



        }
        else if(mainWindow != nullptr)
        {

            mainWindow->connectedSuccessfully();
        }
        break;
    case -2:

        if(adminUI!=nullptr)
        {
            adminUI->responseReady(Data);



        }
        else if(userUI!=nullptr)
        {
            userUI->responseReady(Data);

        }
        else if(mainWindow != nullptr)
        {

            mainWindow->disconnected();
        }
        break;
    case 0 :

        if ( (Data.value("State").toBool() ))
        {

            if(Data.value("IsAdmin").toBool()  )
            {


                closeMainUI();
                createAdminUI();


            }

            else
            {
                closeMainUI();
                createUserUI(Data.value("Name").toString());
            }
        }
        else
        {
            mainWindow->failedLoginSlot(Data.value("Reason").toString().toInt());
        }

        break;
    case 1:
    case 3:
    case 4:
    case 6:

        adminUI->responseReady(Data);
        break;
    case 2:
    case 5:
    case 7:

        if(adminUI!=nullptr)
        {
            adminUI->responseReady(Data);

        }
        else
        {
            userUI->responseReady(Data);

        }

        break;


    case 8:
    case 9:
    case 10:
    case 11:
    case 12:

        userUI->responseReady(Data);
        break;


    }






}

void WindowManager::requestReady(QJsonObject Data)
{



    emit makeRequest( Data);



}

void WindowManager::logout()
{
    QObject * sender = this->sender();

    if(sender->objectName() == "AdminInterface")
    {
        closeAdminUI();
    }
    else
    {
       closeUserUI();
    }

    emit requestDisconnection();
    createMainUI();


}

void WindowManager::createMainUI()
{
    mainWindow = new MainWindow();
    connect(mainWindow,&MainWindow::WLoginDataAquired,this,&WindowManager::requestReady);
    // connect(this,&WindowManager::failedLoginSignal,mainWindow,&MainWindow::failedLoginSlot);
    connect(mainWindow,&MainWindow::connectToTheServer,this,&WindowManager::connectToTheServer);


    mainWindow->show();
}

void WindowManager::createAdminUI()
{
    adminUI = new AdminInterface(serverIP);


    connect(adminUI,&AdminInterface::Request,this,&WindowManager::requestReady);
    connect(adminUI,&AdminInterface::logout,this,&WindowManager::logout);
    connect(adminUI,&AdminInterface::connectToTheServer,this,&WindowManager::connectToTheServer);


    adminUI->show();
}

void WindowManager::createUserUI(QString name)
{
    userUI = new UserInterface(name,serverIP);

    //connects
    connect(userUI,&UserInterface::Request,this,&WindowManager::makeRequest);
    connect(userUI,&UserInterface::logout,this,&WindowManager::logout);
    connect(userUI,&UserInterface::connectToTheServer,this,&WindowManager::connectToTheServer);

    userUI->show();

}

void WindowManager::closeAdminUI()
{
    delete adminUI;
    adminUI = nullptr;
}

void WindowManager::closeUserUI()
{
    delete userUI;
    userUI=nullptr;
}

void WindowManager::closeMainUI()
{
    delete mainWindow;
    mainWindow=nullptr;
}

void WindowManager::connectToTheServer(QString ip)
{
    serverIP = ip;
    emit requestConnection(ip);
}



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
    qInfo()<<"WindowManager responseReady thread "<<QThread::currentThread();

    int responeID = Data.value("ResponseID").toString().toInt();
    qInfo()<<responeID<<"idddddddddddddddddd";
    switch(responeID)
    {

    case -1 :
        if(adminUI!=nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.1";

            emit responeForAdmin(Data);

        }
        else if(userUI!=nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.2";

            emit responeForUser(Data);

        }
        else if(w != nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.3";

            w->connectedSuccessfully();
        }
        break;
    case -2:
        if(adminUI!=nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.1";

            emit responeForAdmin(Data);

        }
        else if(userUI!=nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.2";

            emit responeForUser(Data);

        }
        else if(w != nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.3";

            w->disconnected();
        }
        break;
    case 0 :
        qInfo()<<responeID;
        if ( (Data.value("State").toBool() ))
        {
            qInfo()<<responeID<<"1";

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
            qInfo()<<responeID;
            qInfo()<<Data.value("Reason").toString().toInt();

            emit failedLoginSignal(Data.value("Reason").toString().toInt());
        }

        break;
    case 1:
    case 3:
    case 4:
    case 6:
        qInfo()<<responeID<<"idddddddddddddddddd1111";

    emit responeForAdmin(Data);
        break;
    case 2:
    case 5:
    case 7:
        qInfo()<<responeID<<"idddddddddddddddddd222";

        if(adminUI!=nullptr)
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.1";

            emit responeForAdmin(Data);

        }
        else
        {
            qInfo()<<responeID<<"idddddddddddddddddd222.2";

            emit responeForUser(Data);

        }

        break;


    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        qInfo()<<responeID<<"idddddddddddddddddd333";

        emit responeForUser(Data);
        break;


    }


    qInfo()<<"responseReady1";




}

void WindowManager::requestReady(QJsonObject Data)
{



    emit makeRequest( Data);



}

void WindowManager::logout()
{
    QObject * sender = this->sender();
    qInfo()<<sender->objectName();

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
    w = new MainWindow();
    connect(w,&MainWindow::WLoginDataAquired,this,&WindowManager::requestReady);
    connect(this,&WindowManager::failedLoginSignal,w,&MainWindow::failedLoginSlot);
    connect(w,&MainWindow::connectToTheServer,this,&WindowManager::connectToTheServer);


    w->show();
}

void WindowManager::createAdminUI()
{
    adminUI = new AdminInterface();


    connect(adminUI,&AdminInterface::adminRequest,this,&WindowManager::requestReady);
    connect(this,&WindowManager::responeForAdmin,adminUI,&AdminInterface::responseReady);
    connect(adminUI,&AdminInterface::logout,this,&WindowManager::logout);
    connect(adminUI,&AdminInterface::connectToTheServer,this,&WindowManager::connectToTheServer);


    adminUI->show();
}

void WindowManager::createUserUI(QString name)
{
    userUI = new UserInterface(name);

    //connects
    connect(this,&WindowManager::responeForUser,userUI,&UserInterface::responseReady);
    connect(userUI,&UserInterface::userRequest,this,&WindowManager::makeRequest);
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
    delete w;
    w=nullptr;
}

void WindowManager::connectToTheServer()
{
    qInfo()<<"clicked1";
    emit requestConnection();
}



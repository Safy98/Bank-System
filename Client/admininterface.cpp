#include "admininterface.h"
#include "ui_admininterface.h"

AdminInterface::AdminInterface(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminInterface)
{
    ui->setupUi(this);
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:green ;}");
}

AdminInterface::~AdminInterface()
{
    delete ui;
}

void AdminInterface::on_pbCreateUser_clicked()
{
     createUserWindow = new CreateUserWindow(this);
    qInfo()<<createUserWindow<<"createwidnpw pointer";
    connect(createUserWindow,&CreateUserWindow::createUserRequest,this,&AdminInterface::createUserRequest);
     connect(createUserWindow,&CreateUserWindow::backPressed,this,&AdminInterface::backPressed);
    qInfo()<<"hi create1";
    createUserWindow->exec();
    qInfo()<<"hi create2";
}

void AdminInterface::createUserRequest(QString fullName, int age, QString userName, QString password, QString confPassword, bool isAdmin)
{
    QJsonObject request;
    request["RequestID"]="1";
    request["FullName"]=fullName;
    request["Age"]=QString::number(age);
    request["AccountBalance"]="0";
    request["UserName"]=userName;
    request["Password"]=password;
    request["ConfPassword"]=confPassword;
    request["IsAdmin"]=isAdmin;

    emit adminRequest(request);


}

void AdminInterface::getAccountNumberRequest(QString username)
{
    QJsonObject request;
    request["RequestID"]="2";
    request["UserName"]=username;

    emit adminRequest(request);




}

void AdminInterface::deleteUserRequest(QString accountNumber)
{
    QJsonObject request;
    request["RequestID"]="3";
    request["AccountNumber"]=accountNumber;
    emit adminRequest(request);
}

void AdminInterface::updateUserRequest(QString accountNumber,QString fullName, int age, QString userName, QString password, QString confPassword, bool isAdmind)
{
    QJsonObject request;
    request["RequestID"]="4";
    request["AccountNumber"]=accountNumber;
    request["AccountBalance"] = "0";
    request["FullName"]=fullName;
    request["Age"]=QString::number(age);
    request["UserName"]=userName;
    request["Password"]=password;
    request["ConfPassword"]=confPassword;
    request["IsAdmind"]=isAdmind;

    emit adminRequest(request);

}

void AdminInterface::sendViewTransHistory(QString accountNumber, QString count)
{
    QJsonObject request;
    request["RequestID"]="5";
    request["AccountNumber"]=accountNumber;
    request["Count"]=count;


    emit adminRequest(request);

}

void AdminInterface::GetAccountBalance(QString accountNumber)
{
    QJsonObject request;
    request["RequestID"]="7";
    request["AccountNumber"]=accountNumber;

    emit adminRequest(request);


}

void AdminInterface::responseReady(QJsonObject response)
{
    int id = response.value("ResponseID").toString().toInt();
    qInfo()<<"creaaaaate respooonse id"<<id;
    switch(id)
    {

    case -1:
         connectedSuccessfully();
        break;
    case -2:
         disconnected();

        break;
    case 1:

        if(response.value("State").toBool())
        {
            createUserWindow->responseSuccessfull();
        }
        else
        {
            createUserWindow->responseFailed(response.value("Reason").toString().toInt());
        }


        break;

    case 2:
        if(response.value("State").toBool())
        {
            accountNumberWindow->responseSuccessfull(response.value("AccountNumber").toString().toInt());
        }
        else
        {
            qInfo()<<"falsaasdad";
            accountNumberWindow->responseFailed(response.value("Reason").toString().toInt());

        }

        break;
    case 3:
        if(response.value("State").toBool())
        {
            deleteUserWindow->responseSuccessfull();
        }
        else
        {
            qInfo()<<"falsaasdad";
            deleteUserWindow->responseFailed(response.value("Reason").toString().toInt());

        }
        break;
    case 4:

        if(response.value("State").toBool())
        {
            updateUserWindow->responseSuccessfull();
        }
        else
        {
            qInfo()<<"falsaasdad";
            updateUserWindow->responseFailed(response.value("Reason").toString().toInt());

        }

        break;

    case 5:

        if(response.value("State").toBool())
        {
            viewTransHistory->responseSuccessfull(response);
        }
        else
        {
            qInfo()<<"falsaasdad";
            viewTransHistory->responseFailed(response.value("Reason").toString().toInt());

        }
        break;
    case 6:

        if(response.value("State").toBool())
        {

            createViewDBUI();
            viewDBWindow->responseSuccessfull(response);
            viewDBWindow->exec();
        }
        else
        {
            if(response.value("Reason").toString().toInt() == -1 )
                QMessageBox::critical(this,"Error","DataBase is empty",QMessageBox::Ok);
            else
            QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);


        }

        break;

    case 7:

        if(response.value("State").toBool())
        {
            getAccountBalanceWindow->responseSuccessfull(response.value("AccountBalance").toString());
        }
        else
        {
            qInfo()<<"falsaasdad";
            getAccountBalanceWindow->responseFailed(response.value("Reason").toString().toInt());

        }

        break;

    }
}

void AdminInterface::backPressed()
{
    QObject * sender =  this->sender();
    delete sender;
}

void AdminInterface::createTransHistoryUI()
{
    viewTransHistory = new ViewTransHistory(this);

    //connects
    connect(viewTransHistory,&ViewTransHistory::backPressed,this,&AdminInterface::backPressed);
    connect(viewTransHistory,&ViewTransHistory::sendViewTransHistory,this,&AdminInterface::sendViewTransHistory);

    viewTransHistory->exec();
}

void AdminInterface::createViewDBUI()
{
    viewDBWindow = new ViewDB(this);

    //connects
    connect(viewDBWindow,&ViewDB::backPressed,this,&AdminInterface::backPressed);

    // viewDBWindow->exec();
}

void AdminInterface::createGetAccNumUI()
{
    getAccountBalanceWindow = new GetAccBalance(this);
    connect(getAccountBalanceWindow,&GetAccBalance::backPressed,this,&AdminInterface::backPressed);
    connect(getAccountBalanceWindow,&GetAccBalance::GetAccountBalance,this,&AdminInterface::GetAccountBalance);


    getAccountBalanceWindow->exec();
}

void AdminInterface::connectedSuccessfully()
{
    ui->pushButton_connectState->setText("Connected");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:green ;}");
    ui->pushButton_connectState->setEnabled(false);
}

void AdminInterface::disconnected()
{
    QMessageBox::critical(this,"Error","Disconnected from the server",QMessageBox::Ok);
    ui->pushButton_connectState->setText("Reconnect");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:red ;}");
    ui->pushButton_connectState->setEnabled(true);

}


void AdminInterface::on_pbGetAccountNum_clicked()
{
    accountNumberWindow = new AgetAccountNumWindow(this);
    connect(accountNumberWindow,&AgetAccountNumWindow::backPressed,this,&AdminInterface::backPressed);
    connect(accountNumberWindow,&AgetAccountNumWindow::getAccountNumberRequest,this,&AdminInterface::getAccountNumberRequest);

    accountNumberWindow->exec();
}


void AdminInterface::on_pbDeleteeUser_clicked()
{
    deleteUserWindow = new DeleteUserWindow(this);
    connect(deleteUserWindow,&DeleteUserWindow::backPressed,this,&AdminInterface::backPressed);
    connect(deleteUserWindow,&DeleteUserWindow::deleteUserRequest,this,&AdminInterface::deleteUserRequest);
    deleteUserWindow->exec();

}


void AdminInterface::on_pbUpdateUser_clicked()
{
    updateUserWindow = new UpdateUserWindow(this);
    connect(updateUserWindow,&UpdateUserWindow::backPressed,this,&AdminInterface::backPressed);
    connect(updateUserWindow,&UpdateUserWindow::updateUserRequest,this,&AdminInterface::updateUserRequest);


    updateUserWindow->exec();
}


void AdminInterface::on_pushButton_logout_clicked()
{
    emit logout();
}


void AdminInterface::on_pbViewTransHistory_clicked()
{
    createTransHistoryUI();
}


void AdminInterface::on_pbViewDB_clicked()
{
    QJsonObject request;
    request["RequestID"]="6";



    emit adminRequest(request);
}


void AdminInterface::on_pbGetAccountBalance_clicked()
{
    createGetAccNumUI();
}


void AdminInterface::on_pushButton_connectState_clicked()
{
    emit connectToTheServer();

}


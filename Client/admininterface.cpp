#include "admininterface.h"
#include "ui_admininterface.h"

AdminInterface::AdminInterface(IUser * parent)
    :IUser (parent)
    ,ui(new Ui::AdminInterface)
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
    createCreateUserUI();
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

    emit Request(request);


}

void AdminInterface::getAccountNumberRequest(QString username)
{
    QJsonObject request;
    request["RequestID"]="2";
    request["UserName"]=username;

    emit Request(request);




}

void AdminInterface::deleteUserRequest(QString accountNumber)
{
    QJsonObject request;
    request["RequestID"]="3";
    request["AccountNumber"]=accountNumber;
    emit Request(request);
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

    emit Request(request);

}

void AdminInterface::viewTransHistoryRequest(QString accountNumber, QString count)
{
    QJsonObject request;
    request["RequestID"]="5";
    request["AccountNumber"]=accountNumber;
    request["Count"]=count;


    emit Request(request);

}

void AdminInterface::getAccountBalanceRequest(QString accountNumber)
{
    QJsonObject request;
    request["RequestID"]="7";
    request["AccountNumber"]=accountNumber;

    emit Request(request);


}

void AdminInterface::responseReady(QJsonObject response)
{
    int id = response.value("ResponseID").toString().toInt();
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
            getAccountBalanceWindow->responseFailed(response.value("Reason").toString().toInt());

        }

        break;

    }
}


/// @brief checks the sender ui and deletes it from the heap
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
    connect(viewTransHistory,&ViewTransHistory::sendViewTransHistory,this,&AdminInterface::viewTransHistoryRequest);

    viewTransHistory->exec();
}

void AdminInterface::createCreateUserUI()
{
    createUserWindow = new CreateUserWindow(this);
    connect(createUserWindow,&CreateUserWindow::createUserRequest,this,&AdminInterface::createUserRequest);
    connect(createUserWindow,&CreateUserWindow::backPressed,this,&AdminInterface::backPressed);
    createUserWindow->exec();
}

void AdminInterface::createUpdateUserUI()
{
    updateUserWindow = new UpdateUserWindow(this);
    connect(updateUserWindow,&UpdateUserWindow::backPressed,this,&AdminInterface::backPressed);
    connect(updateUserWindow,&UpdateUserWindow::updateUserRequest,this,&AdminInterface::updateUserRequest);


    updateUserWindow->exec();
}

void AdminInterface::createDeleteUserUI()
{
    deleteUserWindow = new DeleteUserWindow(this);
    connect(deleteUserWindow,&DeleteUserWindow::backPressed,this,&AdminInterface::backPressed);
    connect(deleteUserWindow,&DeleteUserWindow::deleteUserRequest,this,&AdminInterface::deleteUserRequest);
    deleteUserWindow->exec();
}

void AdminInterface::createViewDBUI()
{
    viewDBWindow = new ViewDB(this);

    connect(viewDBWindow,&ViewDB::backPressed,this,&AdminInterface::backPressed);

    // the window will be shown by the adminobject if the database is available
}

void AdminInterface::createGetAccNumUI()
{
    accountNumberWindow = new AgetAccountNumWindow(this);
    connect(accountNumberWindow,&AgetAccountNumWindow::backPressed,this,&AdminInterface::backPressed);
    connect(accountNumberWindow,&AgetAccountNumWindow::getAccountNumberRequest,this,&AdminInterface::getAccountNumberRequest);

    accountNumberWindow->exec();
}

void AdminInterface::createGetAccBalanceUI()
{
    getAccountBalanceWindow = new GetAccBalance(this);
    connect(getAccountBalanceWindow,&GetAccBalance::backPressed,this,&AdminInterface::backPressed);
    connect(getAccountBalanceWindow,&GetAccBalance::GetAccountBalance,this,&AdminInterface::getAccountBalanceRequest);


    getAccountBalanceWindow->exec();
}

void AdminInterface::connectedSuccessfully()
{
    ui->pushButton_connectState->setText("Connected");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:green ;}");
    ui->pushButton_connectState->setEnabled(false);
    ui->pbCreateUser->setEnabled(true);
    ui->pbDeleteeUser->setEnabled(true);
    ui->pbUpdateUser->setEnabled(true);
    ui->pbGetAccountBalance->setEnabled(true);
    ui->pbGetAccountNum->setEnabled(true);
    ui->pbViewDB->setEnabled(true);
    ui->pbViewTransHistory->setEnabled(true);
}

void AdminInterface::disconnected()
{
    QMessageBox::critical(this,"Error","Disconnected from the server",QMessageBox::Ok);
    ui->pushButton_connectState->setText("Reconnect");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:red ;}");
    ui->pushButton_connectState->setEnabled(true);
    ui->pbCreateUser->setEnabled(false);
    ui->pbDeleteeUser->setEnabled(false);
    ui->pbUpdateUser->setEnabled(false);
    ui->pbGetAccountBalance->setEnabled(false);
    ui->pbGetAccountNum->setEnabled(false);
    ui->pbViewDB->setEnabled(false);
    ui->pbViewTransHistory->setEnabled(false);


}


void AdminInterface::on_pbGetAccountNum_clicked()
{
    createGetAccNumUI();

}


void AdminInterface::on_pbDeleteeUser_clicked()
{
    createDeleteUserUI();

}


void AdminInterface::on_pbUpdateUser_clicked()
{
   createUpdateUserUI();
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



    emit Request(request);
}


void AdminInterface::on_pbGetAccountBalance_clicked()
{
    createGetAccBalanceUI();
}


void AdminInterface::on_pushButton_connectState_clicked()
{
    emit connectToTheServer();

}


#include "userinterface.h"
#include "ui_userinterface.h"

UserInterface::UserInterface(QString name ,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserInterface)
{
    ui->setupUi(this);
    ui->label->setText("Welcome "+name);
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:green ;}");

}

UserInterface::~UserInterface()
{
    delete ui;
}

void UserInterface::sendTransRequest(QString accountNumber, QString amount)
{
    QJsonObject request;

    request["RequestID"]="8";
    request["AccountNumber"] = accountNumber;
    request["Amount"] = amount;


   emit userRequest(request);
}

void UserInterface::getAccountBalance(QString accountNumber)
{
    QJsonObject request;
    request["RequestID"]="7";
    request["AccountNumber"]=accountNumber;

    emit userRequest(request);
}

void UserInterface::getAccountNumber(QString userName)
{
    QJsonObject request;
    request["RequestID"]="2";
    request["UserName"]=userName;

    emit userRequest(request);

}

void UserInterface::sendViewTransHistory(QString accountNumber, QString count)
{


        QJsonObject request;
        request["RequestID"]="5";
        request["AccountNumber"]=accountNumber;
        request["Count"]=count;


        emit userRequest(request);


}

void UserInterface::sendTransferRequest(QString senderaccountNumber, QString receiveraccountNumber, QString amount)
{
    QJsonObject request;
    request["RequestID"]="9";
    request["SenderAccountNumber"]=senderaccountNumber;
    request["ReceiverAccountNumber"]=receiveraccountNumber;

    request["Amount"]=amount;


    emit userRequest(request);
}

void UserInterface::responseReady(QJsonObject response)
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
    case 2:
        if(response.value("State").toBool())
        {
            getAccNumUI->responseSuccessfull(response.value("AccountNumber").toString().toInt());
        }
        else
        {
            qInfo()<<"falsaasdad";
            getAccNumUI->responseFailed(response.value("Reason").toString().toInt());

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

    case 7:

        if(response.value("State").toBool())
        {
            getAccBalance->responseSuccessfull(response.value("AccountBalance").toString());
        }
        else
        {
            qInfo()<<"falsaasdad";
            getAccBalance->responseFailed(response.value("Reason").toString().toInt());

        }

        break;
    case 8:

        if(response.value("State").toBool())
        {
            makeTrans->responseSuccessfull();
        }
        else
        {
            makeTrans->responseFailed(response.value("Reason").toString().toInt());
        }


        break;

    case 9:

        if(response.value("State").toBool())
        {
            makeTransferUI->responseSuccessfull();
        }
        else
        {
            makeTransferUI->responseFailed(response.value("Reason").toString().toInt());
        }


        break;


}
}

void UserInterface::on_pushButton_logout_clicked()
{
    emit logout();
}


void UserInterface::backPressed()
{
    QObject * sender =  this->sender();
    delete sender;
}
void UserInterface::on_pushButton_makeTransaction_clicked()
{
    makeTrans = new MakeTransaction(this);

    connect(makeTrans,&MakeTransaction::sendTransRequest,this,&UserInterface::sendTransRequest);
    connect(makeTrans,&MakeTransaction::backPressed,this,&UserInterface::backPressed);
    makeTrans->exec();
}


void UserInterface::on_pushButton_accountNumber_clicked()
{
    createGetAccNumUI();
}

void UserInterface::createGetAccNumUI()
{
    getAccNumUI = new AgetAccountNumWindow(this);

    connect(getAccNumUI,&AgetAccountNumWindow::backPressed,this,&UserInterface::backPressed);
    connect(getAccNumUI,&AgetAccountNumWindow::getAccountNumberRequest,this,&UserInterface::getAccountNumber);


    getAccNumUI->exec();
}

void UserInterface::createGetAccBalanceUI()
{
    getAccBalance = new GetAccBalance(this);

    connect(getAccBalance,&GetAccBalance::backPressed,this,&UserInterface::backPressed);
    connect(getAccBalance,&GetAccBalance::GetAccountBalance,this,&UserInterface::getAccountBalance);

    getAccBalance->exec();
}

void UserInterface::createTransHistoryUI()
{
    viewTransHistory = new ViewTransHistory(this);

    //connects
    connect(viewTransHistory,&ViewTransHistory::backPressed,this,&UserInterface::backPressed);
    connect(viewTransHistory,&ViewTransHistory::sendViewTransHistory,this,&UserInterface::sendViewTransHistory);

    viewTransHistory->exec();
}

void UserInterface::createTransferUI()
{
    makeTransferUI = new MakeTransfer(this);
    connect(makeTransferUI,&MakeTransfer::backPressed,this,&UserInterface::backPressed);
    connect(makeTransferUI,&MakeTransfer::sendTransferRequest,this,&UserInterface::sendTransferRequest);


    makeTransferUI->exec();
}

void UserInterface::connectedSuccessfully()
{
    ui->pushButton_connectState->setText("Connected");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:green ;}");
    ui->pushButton_connectState->setEnabled(false);

}


void UserInterface::disconnected()
{
    QMessageBox::critical(this,"Error","Disconnected from the server",QMessageBox::Ok);
    ui->pushButton_connectState->setText("Reconnect");
    ui->pushButton_connectState->setStyleSheet("QPushButton{height:40px; background-color:red ;}");
    ui->pushButton_connectState->setEnabled(true);
}


void UserInterface::on_pushButton_viewAccBalance_clicked()
{
    createGetAccBalanceUI();
}


void UserInterface::on_pushButton_viewTransHistory_clicked()
{
     createTransHistoryUI();

}


void UserInterface::on_pushButton_makeTransfer_clicked()
{
    createTransferUI();
}


void UserInterface::on_pushButton_connectState_clicked()
{
    emit connectToTheServer();
}


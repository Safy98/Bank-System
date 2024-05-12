#include "maketransfer.h"
#include "ui_maketransfer.h"

MakeTransfer::MakeTransfer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MakeTransfer)
{
    ui->setupUi(this);
    ui->label_amountError->hide();
    ui->label_reciverAccNummError->hide();
    ui->label_senderAccNummError->hide();
}

MakeTransfer::~MakeTransfer()
{
    delete ui;
}

void MakeTransfer::responseSuccessfull()
{
    QMessageBox::information(this,"succeesful","Transfer has been done Successfully",QMessageBox::Ok);
    ui->pushButton_confirm->setEnabled(false);


}

void MakeTransfer::responseFailed(int errorState)
{
    if(errorState  == -1 )
    {

        ui->label_senderAccNummError->setText("Account number not registerd");
        ui->label_senderAccNummError->show();

        return;

    }
    if(errorState  == -2 )
    {

        QMessageBox::critical(this,"Error","You have insufficient balance",QMessageBox::Ok);

        return;

    }
    if(errorState  == -3 )
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->label_amountError->hide();

        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if(errorState  == -4 )
    {

        ui->label_reciverAccNummError->setText("Account number not registerd");
        ui->label_reciverAccNummError->show();

        return;

    }

    if((errorState % 2) == 1 )
    {
        ui->label_senderAccNummError->setText("Account Numbercan't be empty");
        ui->label_senderAccNummError->show();



    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_reciverAccNummError->setText("Account Numbercan't be empty");
        ui->label_reciverAccNummError->show();



    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amountError->setText("Amount most be positive value ");
        ui->label_amountError->show();


    }

    errorState /=10;
    if((errorState % 2) == 1 )
    {

        QMessageBox::critical(this,"Error","Sender and Receiver can't be the same",QMessageBox::Ok);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amountError->setText("Account Number can only contain 1-7 numerical digits");
        ui->label_amountError->show();


    }

    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amountError->setText("Account Number can only contain 1-7 numerical digits ");
        ui->label_amountError->show();


    }

    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amountError->setText("amount must be a number and max 1 milion");
        ui->label_amountError->show();


    }



}

void MakeTransfer::on_pushButton_Back_clicked()
{
    emit backPressed();
}


void MakeTransfer::on_pushButton_confirm_clicked()
{
    QString sender = ui->lineEdit_SenderAccNumm->text().trimmed();
    QString reciever = ui->lineEdit_recieverAccNum->text().trimmed();
    QString amount = ui->lineEdit_amount->text().trimmed();

    ui->label_amountError->hide();
    ui->label_reciverAccNummError->hide();
    ui->label_senderAccNummError->hide();
    ui->pushButton_confirm->setEnabled(false);

    emit sendTransferRequest(sender,reciever,amount);
}


void MakeTransfer::on_lineEdit_SenderAccNumm_textChanged(const QString &arg1)
{
    ui->pushButton_confirm->setEnabled(true);
}


void MakeTransfer::on_lineEdit_recieverAccNum_textChanged(const QString &arg1)
{
    ui->pushButton_confirm->setEnabled(true);

}


void MakeTransfer::on_lineEdit_amount_textChanged(const QString &arg1)
{
    ui->pushButton_confirm->setEnabled(true);

}


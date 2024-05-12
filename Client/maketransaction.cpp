#include "maketransaction.h"
#include "ui_maketransaction.h"

MakeTransaction::MakeTransaction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MakeTransaction)
{
    ui->setupUi(this);
    ui->label_amoutError->hide();
    ui->label_accountNumError->hide();


}

MakeTransaction::~MakeTransaction()
{
    delete ui;
}

void MakeTransaction::responseSuccessfull()
{
    QMessageBox::information(this,"succeesful","Transaction has been done Successfully",QMessageBox::Ok);
    ui->pushButton_confirm->setEnabled(true);



}

void MakeTransaction::responseFailed(int errorState)
{
    if(errorState  == -1 )
    {

        ui->label_accountNumError->setText("Account number not registerd");
        ui->label_accountNumError->show();
        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if(errorState  == -2 )
    {

        QMessageBox::critical(this,"Error","You have insufficient balance",QMessageBox::Ok);
        ui->label_amoutError->hide();
        ui->label_accountNumError->hide();
        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if(errorState  == -3 )
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->label_amoutError->hide();
        ui->label_accountNumError->hide();
        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if((errorState % 2) == 1 )
    {
        ui->label_accountNumError->setText("Account Numbercan't be empty");
        ui->label_accountNumError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amoutError->setText("Amount Section   can't be empty");
        ui->label_amoutError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_amoutError->setText("amount must be a number and max 1 milion");
        ui->label_amoutError->show();
        ui->pushButton_confirm->setEnabled(true);


    }

}

void MakeTransaction::on_pushButton_back_clicked()
{
     emit backPressed();

}


void MakeTransaction::on_pushButton_confirm_clicked()
{


    QString accountNumber = ui->lineEdit_username->text().trimmed();
    QString amount = ui->lineEdit_amount->text().trimmed();

    ui->label_amoutError->hide();
    ui->label_accountNumError->hide();
    ui->pushButton_confirm->setEnabled(false);


    emit sendTransRequest(accountNumber,amount);

}


void MakeTransaction::on_lineEdit_amount_textChanged(const QString &arg1)
{
    ui->label_amoutError->hide();

}


void MakeTransaction::on_lineEdit_username_textChanged(const QString &arg1)
{
    ui->label_accountNumError->hide();
}


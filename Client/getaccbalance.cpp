#include "getaccbalance.h"
#include "ui_getaccbalance.h"

GetAccBalance::GetAccBalance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GetAccBalance)
{
    ui->setupUi(this);
    ui->label_accNumError->hide();
}

GetAccBalance::~GetAccBalance()
{
    delete ui;
}

void GetAccBalance::responseSuccessfull(QString balance)
{
    ui->label_balance->setText("Balance : "+balance);
}

void GetAccBalance::responseFailed(int errorState)
{
    qInfo()<<errorState<<"response get failed";

    if(errorState == -1)
    {

        ui->label_accNumError->setText("Account doesn't exists");
        ui->label_accNumError->show();
        ui->pushButton_confirm->setEnabled(true);
    }
    if(errorState == -2)
    {
        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->pushButton_confirm->setEnabled(true);
    }
    if(errorState == 1)
    {

        ui->label_accNumError->setText("Account Number can't be empty");
        ui->label_accNumError->show();
    }
    errorState/=10;
    if(errorState == 1)
    {

        ui->label_accNumError->setText("Account Number can only contain 1-7 numerical digits");
        ui->label_accNumError->show();
    }

}

void GetAccBalance::on_pushButton_confirm_clicked()
{
    QString accoutNumber = ui->lineEdit_accnum->text();
    ui->pushButton_confirm->setEnabled(false);
    ui->label_balance->setText("Balance : ");

    emit GetAccountBalance(accoutNumber);
}


void GetAccBalance::on_pushButton_back_clicked()
{
    emit backPressed();
}


void GetAccBalance::on_lineEdit_accnum_textChanged(const QString &arg1)
{
    ui->label_accNumError->hide();
    ui->pushButton_confirm->setEnabled(true);
}


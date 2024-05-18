#include "agetaccountnumwindow.h"
#include "ui_agetaccountnumwindow.h"

AgetAccountNumWindow::AgetAccountNumWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AgetAccountNumWindow)
{
    ui->setupUi(this);
    ui->label_error->hide();
    ui->label_result->setText("Account Number : ");
    setWindowFlag(Qt::FramelessWindowHint);

}

AgetAccountNumWindow::~AgetAccountNumWindow()
{
    delete ui;
}

void AgetAccountNumWindow::responseSuccessfull(int accountNumber)
{



    ui->label_result->setText("Account Number : "+QString::number(accountNumber));
    ui->pushButton_confirm->setEnabled(true);


}

void AgetAccountNumWindow::responseFailed(int errorState)
{
    if(errorState == 10)
    {

        ui->label_error->setText("Username  must only contain alphanumeric characters");
        ui->label_error->show();

    }
    if(errorState == 1)
    {

        ui->label_error->setText("Username can't be empty");
        ui->label_error->show();

    }
    if(errorState == -1)
    {

        ui->label_error->setText("Username doesn't exists");
        ui->label_error->show();

    }

    if(errorState == -2)
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->pushButton_confirm->setEnabled(true);

    }

}

void AgetAccountNumWindow::on_pushButton_Back_clicked()
{
    emit backPressed();
}


void AgetAccountNumWindow::on_pushButton_confirm_clicked()
{
    QString username = ui->lineEdit->text();
    ui->label_result->setText("Account Number : ");

    username=username.trimmed();
    ui->pushButton_confirm->setEnabled(false);

    emit getAccountNumberRequest(username);
}


void AgetAccountNumWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->label_error->hide();

    ui->pushButton_confirm->setEnabled(true);

}


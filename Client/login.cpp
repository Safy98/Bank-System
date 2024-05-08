#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->lineEdit_username->setPlaceholderText("User name");
    ui->lineEdit_password->setPlaceholderText("Password");

    ui->lineEdit_username->setClearButtonEnabled(true);
    ui->lineEdit_password->setClearButtonEnabled(true);

    ui->lineEdit_password->setEchoMode(QLineEdit::Password);


    ui->label_userName->hide();
    ui->label_password->hide();




}

Login::~Login()
{
    delete ui;
}

void Login::failedLoginSlot(int errorState)
{
    qInfo()<<errorState;


    if(errorState  == -1 )
    {
        qInfo()<<"hi";
        ui->label_userName->setText("Username doesn't exist");
        ui->label_userName->show();
        ui->pushButton_login->setEnabled(true);
        return;

    }
    if(errorState  == -2 )
    {
        qInfo()<<"hi";
        ui->label_password->setText("Incorrect Password ");
        ui->label_password->show();
        ui->pushButton_login->setEnabled(true);
        return;


    }
    if(errorState  == -3 )
    {
        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);

        ui->pushButton_login->setEnabled(true);
        return;


    }
    if((errorState % 2) == 1 )
    {
        qInfo()<<"hi";
        ui->label_userName->setText("Username can't be empty");
        ui->label_userName->show();
        ui->pushButton_login->setEnabled(true);


    }

    errorState /=10;
    if((errorState % 2) == 1 )
    {

        ui->label_password->setText("Password can't be empty");
        ui->label_password->show();
        ui->pushButton_login->setEnabled(true);

    }
    errorState /=10;
    if((errorState % 2) == 1 )    {
        ui->label_userName->setText("Username must only contain alphanumeric characters");
        ui->label_userName->show();
        ui->pushButton_login->setEnabled(true);



    }
    errorState /=10;
    if((errorState % 2) == 1 )    {
        ui->label_password->setText("Password must contain Minimum eight characters, at least one letter, one number and one special character");
        ui->label_password->show();
        ui->pushButton_login->setEnabled(true);

    }

}

void Login::on_pushButton_login_clicked()
{


    QString userName = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    userName =userName.trimmed();
    password = password.trimmed();
    ui->pushButton_login->setDisabled(true);


    qInfo()<<"hi on_pushButton_login_clicked ";
    qInfo()<<userName;
    qInfo()<<password;

    emit loginDataAquired(userName,password);


}


void Login::on_lineEdit_username_textChanged(const QString &arg1)
{
    ui->label_userName->hide();

}


void Login::on_lineEdit_password_textChanged(const QString &arg1)
{
    ui->label_password->hide();

}


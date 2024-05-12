#include "updateuserwindow.h"
#include "ui_updateuserwindow.h"

UpdateUserWindow::UpdateUserWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateUserWindow)
{
    ui->setupUi(this);
    ui->label_accountNumberError->hide();
    ui->label_fullNameError->hide();
    ui->label_userNameError->hide();
    ui->label_passwordError->hide();
    ui->label_confirmPasswordError->hide();
    ui->label_ageError->hide();

}

UpdateUserWindow::~UpdateUserWindow()
{
    delete ui;
}

void UpdateUserWindow::responseSuccessfull()
{
    QMessageBox::information(this,"success","User updated successfully ",QMessageBox::Ok);
    ui->pushButton_confirm->setEnabled(true);


}

void UpdateUserWindow::responseFailed(int errorState)
{


    if(errorState  == -1 )
    {

        QMessageBox::critical(this,"Error","User not found",QMessageBox::Ok);

        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if(errorState  == -2 )
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if(errorState  == -3 )
    {

        QMessageBox::critical(this,"Error","UserName Reserved",QMessageBox::Ok);
        ui->pushButton_confirm->setEnabled(true);
        return;

    }
    if((errorState % 2) == 1 )
    {
        ui->label_fullNameError->setText("Full Name isn't sutible");
        ui->label_fullNameError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_userNameError->setText("Username must only contain alphanumeric characters");
        ui->label_userNameError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_passwordError->setText("Password must contain Minimum eight characters, at least one letter, one number and one special character");
        ui->label_passwordError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_confirmPasswordError->setText("Passwords doesn't match");
        ui->label_confirmPasswordError->show();
        ui->pushButton_confirm->setEnabled(true);
    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_ageError->setText("User must be +18 ");
        ui->label_ageError->show();
        ui->pushButton_confirm->setEnabled(true);


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_accountNumberError->setText("Account Number can't be empty");
        ui->label_accountNumberError->show();
        ui->pushButton_confirm->setEnabled(true);
    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_accountNumberError->setText("Account Number can only contain 1-7 numerical digits");
        ui->label_accountNumberError->show();
        ui->pushButton_confirm->setEnabled(true);
    }





}

void UpdateUserWindow::on_pushButton_confirm_clicked()
{
    bool isAdmin = ui->checkBox_isAdmin->isChecked();
    QString fullName = ui->lineEdit_fullName->text();
    int age = ui->spinBox_age->value();
    QString accountNumber = ui->lineEdit_accountNumber->text();
    QString userName = ui->lineEdit_userName->text();
    QString password = ui->lineEdit_password->text();
    QString confPassword = ui->lineEdit_confPassword->text();
    ui->pushButton_confirm->setEnabled(false);

    accountNumber=accountNumber.trimmed();
    userName=userName.trimmed();
    password=password.trimmed();
    confPassword=confPassword.trimmed();
    fullName=fullName.trimmed();

    ui->label_accountNumberError->hide();
    ui->label_fullNameError->hide();
    ui->label_userNameError->hide();
    ui->label_passwordError->hide();
    ui->label_confirmPasswordError->hide();
    ui->label_ageError->hide();





    emit updateUserRequest(accountNumber,fullName,age,userName,password,confPassword,isAdmin);
}


void UpdateUserWindow::on_pushButton_back_clicked()
{
    emit backPressed();
}


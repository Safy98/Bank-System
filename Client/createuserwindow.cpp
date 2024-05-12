#include "createuserwindow.h"
#include "ui_createuserwindow.h"

CreateUserWindow::CreateUserWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateUserWindow)
{
    ui->setupUi(this);
    ui->spinBox_Age->setMaximum(85);
    // ui->spinBox_Age->setMinimum(18);

    ui->label_userNameError->hide();
    ui->label_fullNameError->hide();
    ui->label_ageError->hide();
    ui->label_passwordError->hide();
    ui->label_confPasswordError->hide();
}

CreateUserWindow::~CreateUserWindow()
{
    delete ui;
}

void CreateUserWindow::responseFailed(int errorState)
{


    if(errorState  == -1 )
    {

        ui->label_userNameError->setText("Username reserved");
        ui->label_userNameError->show();

        return;

    }
    if(errorState  == -2 )
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);
        ui->pushButton->setEnabled(true);
        return;

    }
    if((errorState % 2) == 1 )
    {
        ui->label_fullNameError->setText("Full Name can't be empty");
        ui->label_fullNameError->show();



    }
     errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_userNameError->setText("User Name can't be empty");
        ui->label_userNameError->show();



    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_passwordError->setText("Password can't be empty");
        ui->label_passwordError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_confPasswordError->setText("Please Confirm the Password");
        ui->label_confPasswordError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_userNameError->setText("Username must only contain alphanumeric characters");
        ui->label_userNameError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_passwordError->setText("Password must contain Minimum eight characters, at least one letter, one number and one special character");
        ui->label_passwordError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_fullNameError->setText("Full Name isn't sutible");
        ui->label_fullNameError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_confPasswordError->setText("Passwords doesn't match");
        ui->label_confPasswordError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_ageError->setText("User must be +18 ");
        ui->label_ageError->show();


    }





}

void CreateUserWindow::responseSuccessfull()
{
     QMessageBox::information(this,"succeesful","User created Successfully",QMessageBox::Ok);
     ui->pushButton->setEnabled(true);

}

void CreateUserWindow::on_pushButton_clicked()
{
    bool isAdmin = ui->checkBox_IsAdmin->isChecked();
    QString fullName = ui->lineEdit_FullName->text();
    int age = ui->spinBox_Age->value();

    QString userName = ui->lineEdit_UserName->text();
    QString password = ui->lineEdit_Password->text();
    QString confPassword = ui->lineEdit_ConfirmPassword->text();
    ui->pushButton->setEnabled(false);

    userName=userName.trimmed();
    password=password.trimmed();
    confPassword=confPassword.trimmed();
    fullName=fullName.trimmed();

    ui->label_userNameError->hide();
    ui->label_fullNameError->hide();
    ui->label_ageError->hide();
    ui->label_passwordError->hide();
    ui->label_confPasswordError->hide();

    emit createUserRequest(fullName,age,userName,password,confPassword,isAdmin);
}


void CreateUserWindow::on_lineEdit_FullName_textChanged(const QString &arg1)
{
    ui->label_fullNameError->hide();
    ui->pushButton->setEnabled(true);

}


void CreateUserWindow::on_lineEdit_UserName_textChanged(const QString &arg1)
{
    ui->label_userNameError->hide();
    ui->pushButton->setEnabled(true);

}


void CreateUserWindow::on_lineEdit_Password_textChanged(const QString &arg1)
{
    ui->label_confPasswordError->hide();
    ui->pushButton->setEnabled(true);

}


void CreateUserWindow::on_lineEdit_ConfirmPassword_textChanged(const QString &arg1)
{
    ui->label_confPasswordError->hide();
    ui->pushButton->setEnabled(true);

}


void CreateUserWindow::on_pushButton_2_clicked()
{

    emit backPressed();
}


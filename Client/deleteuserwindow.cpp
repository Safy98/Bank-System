#include "deleteuserwindow.h"
#include "ui_deleteuserwindow.h"

DeleteUserWindow::DeleteUserWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteUserWindow)
{
    ui->setupUi(this);
    ui->label_error->hide();
}

DeleteUserWindow::~DeleteUserWindow()
{
    delete ui;
}

void DeleteUserWindow::on_pushButton_back_clicked()
{
    emit backPressed();
}


void DeleteUserWindow::on_pushButton_confirm_clicked()
{
    QString accountNumber = ui->lineEdit->text().trimmed();
    ui->pushButton_confirm->setEnabled(false);
    emit deleteUserRequest(accountNumber);
}

void DeleteUserWindow::responseSuccessfull()
{
    ui->pushButton_confirm->setEnabled(false);

    QMessageBox::information(this,"Successfull Operation","User has been deleted successfully",QMessageBox::Ok);

}

void DeleteUserWindow::responseFailed(int errorState)
{
    if(errorState == 1)
    {
        ui->label_error->setText("Account Number  can't be empty");
         ui->label_error->show();
    }
    if(errorState == 10)
    {
        ui->label_error->setText("Account Number can only contain 1-7 numerical digits");
        ui->label_error->show();
    }
    if(errorState == -1)
    {

        ui->label_error->setText("Account Number  doesn't exists");
        ui->label_error->show();
    }

    if(errorState == -2)
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);

    }
}


void DeleteUserWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->pushButton_confirm->setEnabled(true);
}


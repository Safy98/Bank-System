#include "viewtranshistory.h"
#include "ui_viewtranshistory.h"

ViewTransHistory::ViewTransHistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewTransHistory)
{
    ui->setupUi(this);

    ui->label_AccountNumError->hide();
    ui->label_coutError->hide();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
}

ViewTransHistory::~ViewTransHistory()
{
    delete ui;
}

void ViewTransHistory::responseSuccessfull(QJsonObject data)
{
    QJsonArray arr = data.value("Transactions").toArray();
    int count = ui->spinBox_count->value();
    ui->tableWidget->setRowCount( count);

    for(int  i = 0  ; i <count ; i++)
    {
        // the tableWidget takes ownership of this alocations and will delete them on his own
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(arr.at(i).toObject().value("Type").toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(arr.at(i).toObject().value("Amount").toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(arr.at(i).toObject().value("date").toString()));

    }
}

void ViewTransHistory::responseFailed(int errorState)
{

    if(errorState  == -1 )
    {

        ui->label_AccountNumError->setText("Account number not registerd");
        ui->label_AccountNumError->show();
        return;

    }
    if(errorState  == -2 )
    {

        QMessageBox::critical(this,"Error","No Transactions have benn made ",QMessageBox::Ok);

        return;

    }
    if(errorState  == -3 )
    {

        QMessageBox::critical(this,"Error","Server failed to perform this task",QMessageBox::Ok);

        ui->pushButton->setEnabled(true);
        return;

    }
    if((errorState % 2) == 1 )
    {
        ui->label_AccountNumError->setText("Account Number can't be empty");
        ui->label_AccountNumError->show();


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_coutError->setText("Count can't be empty");
        ui->label_coutError->show();


    }
    errorState /=10;

    if((errorState % 2) == 1 )
    {
        ui->label_coutError->setText("Count can only be positive none zero value");
        ui->label_coutError->show();


    }
    errorState /=10;
    if((errorState % 2) == 1 )
    {
        ui->label_AccountNumError->setText("Account Number can only contain 1-7  numerical values digits");
        ui->label_AccountNumError->show();


    }

}

void ViewTransHistory::on_pushButton_2_clicked()
{
    emit backPressed();
}


void ViewTransHistory::on_pushButton_clicked()
{
    QString accountNumber = ui->lineEdit_accountNum->text().trimmed();
    QString count =QString::number( ui->spinBox_count->value());

    ui->label_AccountNumError->hide();
    ui->label_coutError->hide();
    ui->pushButton->setEnabled(false);

    emit sendViewTransHistory(accountNumber,count);
}


void ViewTransHistory::on_spinBox_count_valueChanged(int arg1)
{
    ui->label_AccountNumError->hide();
    ui->pushButton->setEnabled(true);

}


void ViewTransHistory::on_lineEdit_accountNum_textChanged(const QString &arg1)
{
    ui->label_coutError->hide();
    ui->pushButton->setEnabled(true);

}


#include "viewdb.h"
#include "ui_viewdb.h"

ViewDB::ViewDB(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewDB)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);

    setWindowFlag(Qt::FramelessWindowHint);

}

void ViewDB::responseSuccessfull(QJsonObject Response)
{
    int rows = Response.value("DataBase").toObject().count();
   QJsonObject DataBaseObj = Response.value("DataBase").toObject();
    ui->tableWidget->setRowCount(rows);
   QStringList  usersList= DataBaseObj.keys();
    int i = 0 ;

        foreach (auto& user, usersList) {
        QJsonObject obj = DataBaseObj.value(user).toObject();
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(obj.value("FullName").toString()));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(obj.value("Age").toString()));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(obj.value("AccountBalance").toString()));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(user));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(obj.value("Password").toString()));
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(obj.value("AccountNumber").toString()));

            i++;
            if(i==rows)
            {
                break;
            }
        }


}



ViewDB::~ViewDB()
{
    delete ui;
}

void ViewDB::on_pushButton_back_clicked()
{
    emit backPressed();
}


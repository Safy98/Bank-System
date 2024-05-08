#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap imtPic("../../icons/logo.png");

    ui->label_ImtIcon->setPixmap(imtPic.scaled(200,200,Qt::KeepAspectRatio));

    QPixmap corePic("../../icons/core.png");
    ui->label_CoreTechIcon->setPixmap(corePic.scaled(180,250,Qt::KeepAspectRatio));
    loginUI = nullptr;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbContinue_clicked()
{
    qInfo()<<"clicked";
    emit connectToTheServer();



}

void MainWindow::loginDataAquired(QString username, QString Password)
{
     qInfo()<<"hi loginDataAquired ";
    QJsonObject request;

     request["RequestID"]="0";
     request["UserName"]=username;
    request["Password"]=Password;
     qInfo()<<username;
     qInfo()<<Password;
   emit WLoginDataAquired(request);


}

void MainWindow::failedLoginSlot(int errorState)
{
    qInfo()<<errorState;

    emit failedLoginSignal( errorState);

}

void MainWindow::connectedSuccessfully()
{
    if(loginUI == nullptr)
    {
        ui->pbContinue->hide();
        ui->label_ImtIcon->hide();
        ui->label_CoreTechIcon->hide();
        loginUI = new Login(this);
        connect(loginUI,&Login::loginDataAquired,this,&MainWindow::loginDataAquired);
        connect(this,&MainWindow::failedLoginSignal,loginUI,&Login::failedLoginSlot);
        ui->verticalLayout->addWidget(loginUI,2);
    }
    else
    {
        ui->pbContinue->hide();
        QMessageBox::information(this,"Error","connected to the server successfully",QMessageBox::Ok);


    }



}

void MainWindow::disconnected()
{
    QMessageBox::critical(this,"Error","Disconnected from the server",QMessageBox::Ok);
    ui->pbContinue->setText("Reconnect ->");
    ui->pbContinue->show();


}


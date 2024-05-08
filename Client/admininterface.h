#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QDialog>
#include <QMessageBox>
#include "createuserwindow.h"
#include "agetaccountnumwindow.h"
#include "deleteuserwindow.h"
#include "updateuserwindow.h"
#include "viewtranshistory.h"
#include "viewdb.h"
#include "getaccbalance.h"
#include <QJsonObject>
namespace Ui {
class AdminInterface;
}

class AdminInterface : public QDialog
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

private slots:
    void on_pbCreateUser_clicked();

    void on_pbGetAccountNum_clicked();

    void on_pbDeleteeUser_clicked();

    void on_pbUpdateUser_clicked();

    void on_pushButton_logout_clicked();

    void on_pbViewTransHistory_clicked();

public slots:
    void createUserRequest(QString fullName ,int age,QString userName,QString password,QString confPassword,bool isAdmin);
    void getAccountNumberRequest(QString username);
    void deleteUserRequest(QString accountNumber);
    void updateUserRequest(QString accountNumber,QString fullName ,int age,QString userName,QString password,QString confPassword,bool isAdmin);
    void sendViewTransHistory(QString accountNumber , QString count);
    void GetAccountBalance(QString accountNumber);
    void responseReady(QJsonObject response);
    void backPressed();



private slots:
   void createTransHistoryUI(void);
   void createViewDBUI(void);
   void createGetAccNumUI(void);

   void connectedSuccessfully();
   void disconnected();

    void on_pbViewDB_clicked();

   void on_pbGetAccountBalance_clicked();

    void on_pushButton_connectState_clicked();

signals:
    void adminRequest(QJsonObject request);
    void connectToTheServer();

    void logout(void);
private:
    Ui::AdminInterface *ui;
    CreateUserWindow* createUserWindow ;
    AgetAccountNumWindow* accountNumberWindow;
    DeleteUserWindow * deleteUserWindow;
    UpdateUserWindow * updateUserWindow;
    ViewTransHistory * viewTransHistory;
    ViewDB * viewDBWindow;
    GetAccBalance * getAccountBalanceWindow;
};

#endif // ADMININTERFACE_H

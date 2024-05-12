#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QDialog>
#include <QMessageBox>
#include <QJsonObject>
#include "createuserwindow.h"
#include "agetaccountnumwindow.h"
#include "deleteuserwindow.h"
#include "updateuserwindow.h"
#include "viewtranshistory.h"
#include "viewdb.h"
#include "getaccbalance.h"
#include "iuser.h"

namespace Ui
{
    class AdminInterface;
}

class AdminInterface : public IUser
{
    Q_OBJECT

public:
    explicit AdminInterface(IUser * parent = nullptr);
    ~AdminInterface();

public slots:

    //Invoked by signal from the AccountController
    void responseReady(QJsonObject response) Q_DECL_OVERRIDE;

    //Invoked by signals from each Request GUI 
    //when the confirm button is clicked
    void createUserRequest(QString fullName, int age, QString userName, QString password, QString confPassword, bool isAdmin);
    void getAccountNumberRequest(QString username) Q_DECL_OVERRIDE;
    void deleteUserRequest(QString accountNumber);
    void updateUserRequest(QString accountNumber, QString fullName, int age, QString userName, QString password, QString confPassword, bool isAdmin);
    void viewTransHistoryRequest(QString accountNumber, QString count) Q_DECL_OVERRIDE;
    void getAccountBalanceRequest(QString accountNumber) Q_DECL_OVERRIDE;

    //Invoked by signals from each Request GUI 
    //when the Back button is clicked
    void backPressed() Q_DECL_OVERRIDE;

private slots:

    //Invoked by each crossponding button in the admin GUI
    void createTransHistoryUI() Q_DECL_OVERRIDE;
    void createCreateUserUI(void);
    void createUpdateUserUI(void);
    void createDeleteUserUI(void);
    void createViewDBUI(void);
    void createGetAccNumUI() Q_DECL_OVERRIDE;
    void createGetAccBalanceUI() Q_DECL_OVERRIDE;
    void connectedSuccessfully() Q_DECL_OVERRIDE;
    void disconnected() Q_DECL_OVERRIDE;



    //Invoked by the GUI
    void on_pbCreateUser_clicked();
    void on_pbGetAccountNum_clicked();
    void on_pbDeleteeUser_clicked();
    void on_pbUpdateUser_clicked();
    void on_pushButton_logout_clicked();
    void on_pbViewTransHistory_clicked();
    void on_pbViewDB_clicked();
    void on_pbGetAccountBalance_clicked();
    void on_pushButton_connectState_clicked();

private:

    Ui::AdminInterface *ui;
    CreateUserWindow *createUserWindow;
    AgetAccountNumWindow *accountNumberWindow;
    DeleteUserWindow *deleteUserWindow;
    UpdateUserWindow *updateUserWindow;
    ViewTransHistory *viewTransHistory;
    ViewDB *viewDBWindow;
    GetAccBalance *getAccountBalanceWindow;

    // IUser interface
protected slots:

    // IUser interface
};

#endif // ADMININTERFACE_H

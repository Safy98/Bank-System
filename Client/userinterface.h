#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QDialog>
#include <QJsonObject>
#include "maketransaction.h"
#include "viewtranshistory.h"
#include "agetaccountnumwindow.h"
#include "getaccbalance.h"
#include "viewtranshistory.h"
#include "maketransfer.h"
#include "iuser.h"

namespace Ui
{
    class UserInterface;
}

class UserInterface : public IUser
{
    Q_OBJECT

public:
    explicit UserInterface(QString name ,QString ip, IUser * parent = nullptr);
    ~UserInterface();

public slots:


    //Invoked by signal from the AccountController
    void responseReady(QJsonObject response) Q_DECL_OVERRIDE;


    //Invoked by signals from each Request GUI 
    //when the confirm button is clicked
    void TransactionRequest(QString accountNumber, QString amount);
    void getAccountBalanceRequest(QString accountNumber) Q_DECL_OVERRIDE;
    void getAccountNumberRequest(QString username) Q_DECL_OVERRIDE;
    void viewTransHistoryRequest(QString accountNumber, QString count) Q_DECL_OVERRIDE;
    void sendTransferRequest(QString senderaccountNumber, QString receiveraccountNumber, QString amount);

    //Invoked by signals from each Request GUI 
    //when the Back button is clicked
    void backPressed() Q_DECL_OVERRIDE;

private slots:

    //Invoked by each crossponding button in the user GUI
    void createGetAccNumUI(void) Q_DECL_OVERRIDE;
    void createMakeTransactionUI(void);
    void createTransHistoryUI() Q_DECL_OVERRIDE;
    void createGetAccBalanceUI() Q_DECL_OVERRIDE;
    void createTransferUI(void);
    void connectedSuccessfully() Q_DECL_OVERRIDE;
    void disconnected() Q_DECL_OVERRIDE;



    //Invoked by the GUI
    void on_pushButton_viewAccBalance_clicked();
    void on_pushButton_viewTransHistory_clicked();
    void on_pushButton_makeTransfer_clicked();
    void on_pushButton_makeTransaction_clicked(void);
    void on_pushButton_accountNumber_clicked(void);
    void on_pushButton_connectState_clicked();
    void on_pushButton_logout_clicked();

signals:


private:
    Ui::UserInterface *ui;
    MakeTransaction *makeTrans;
    GetAccBalance *getAccBalance;
    AgetAccountNumWindow *getAccNumUI;
    ViewTransHistory *viewTransHistory;
    MakeTransfer *makeTransferUI;
    QString serverIP;

    // IUser interface
protected slots:


};

#endif // USERINTERFACE_H

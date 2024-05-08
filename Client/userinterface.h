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

namespace Ui {
class UserInterface;
}

class UserInterface : public QDialog
{
    Q_OBJECT

public:
    explicit UserInterface(QString name ,QWidget *parent = nullptr);
    ~UserInterface();

public slots:
    void sendTransRequest(QString accountNumber , QString amount);
    void getAccountBalance(QString accountNumber);
    void getAccountNumber(QString userName);

    void sendViewTransHistory(QString accountNumber , QString count);
    void sendTransferRequest(QString senderaccountNumber ,QString receiveraccountNumber , QString amount);

    void responseReady(QJsonObject response);


private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_makeTransaction_clicked(void);
    void backPressed(void);
    void on_pushButton_accountNumber_clicked(void);
    void createGetAccNumUI(void);
    void createGetAccBalanceUI(void);
    void createTransHistoryUI(void);
    void createTransferUI(void);
    void connectedSuccessfully();
    void disconnected();

    void on_pushButton_viewAccBalance_clicked();

    void on_pushButton_viewTransHistory_clicked();

    void on_pushButton_makeTransfer_clicked();

    void on_pushButton_connectState_clicked();

signals:
    void logout(void);
    void userRequest(QJsonObject request);
    void connectToTheServer();

private:
    Ui::UserInterface *ui;
    MakeTransaction * makeTrans;
    GetAccBalance * getAccBalance;
    AgetAccountNumWindow * getAccNumUI;
    ViewTransHistory * viewTransHistory;
    MakeTransfer * makeTransferUI;


};

#endif // USERINTERFACE_H

#ifndef IUSER_H
#define IUSER_H

#include <QObject>
#include <QDialog>
#include <QJsonObject>
class IUser : public QDialog
{
    Q_OBJECT
public:
    explicit IUser(QDialog *parent = nullptr);



protected slots:

    //Invoked by signal from the AccountController
   virtual void responseReady(QJsonObject response) = 0;

    //Invoked by signals from each Request GUI
    //when the confirm button is clicked
  virtual  void getAccountNumberRequest(QString username)= 0;
   virtual void viewTransHistoryRequest(QString accountNumber, QString count)= 0;
   virtual void getAccountBalanceRequest(QString accountNumber)= 0;

    // //Invoked by signals from each Request GUI
    // //when the Back button is clicked
   virtual void backPressed()= 0;



    // //Invoked by each crossponding button in the admin GUI
  virtual  void createTransHistoryUI(void)= 0;
   virtual void createGetAccNumUI(void)= 0;
   virtual void createGetAccBalanceUI(void)= 0;

   virtual void connectedSuccessfully()= 0;
   virtual void disconnected()= 0;










signals:

    void Request(QJsonObject request);
    void connectToTheServer(QString ip);

    void logout(void);
};

#endif // IUSER_H

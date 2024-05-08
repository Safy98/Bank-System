#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QThread>

#include "mainwindow.h"
#include "windowmanager.h"
#include "accountcontroller.h"





/// @brief singelton class , surves the purpose of connecting the WindowManger object and the accountController object
class Client : public QObject
{
    Q_OBJECT
public:

    /// @brief static fucntion to creates a singelton object once and returns it after that to each caller
    /// @param parent pointer to the parent obj
    /// @return reference to the singeltong object
    static Client& ClientInstance(QObject *parent = nullptr);

    /// both the copy constructor and the assignment operator
    //are deleted to surve the purpose of singelton design pattern  
    Client(const Client&)=delete;
    void operator =(const Client&)=delete;

    ~Client();


private:

    explicit Client(QObject *parent = nullptr);
    WindowManager *windowManger;
    AccountController* accountController;




};

#endif // CLIENT_H

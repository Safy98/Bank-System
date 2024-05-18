#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QThread>
#include "mainwindow.h"
#include "admininterface.h"
#include "userinterface.h"
class WindowManager : public QObject
{
    Q_OBJECT
public:
    static WindowManager *WindowManagerInstance(QObject *parent = nullptr);

    // both the copy constructor and the assignment operator
    //are deleted to surve the purpose of singelton design pattern
    WindowManager(const WindowManager&)=delete;
    void operator =(const WindowManager&)=delete;

signals:
    void makeRequest(QJsonObject Data);
    void requestConnection(QString ip);
    void requestDisconnection();

private:
    explicit WindowManager(QObject *parent = nullptr);
    MainWindow * mainWindow ;
    AdminInterface * adminUI;
    UserInterface * userUI;
    QString serverIP;


public slots:

    // Invoked by the AccountCintroller signal "sendResponseBack"
    void responseReady(QJsonObject Data);

    //Invoked by each of userWindow, AdminWindow and MainWindow signal
    void requestReady(QJsonObject Data);

    void logout(void);

    void createMainUI(void);
    void createAdminUI(void);
    void createUserUI(QString name);

    void closeAdminUI(void);
    void closeUserUI(void);
    void closeMainUI(void);

    void connectToTheServer(QString ip);

private slots:

};

#endif // WINDOWMANAGER_H

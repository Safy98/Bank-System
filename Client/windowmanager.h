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

signals:
    void makeRequest(QJsonObject Data);
    void failedLoginSignal(int errorState );
    void responeForAdmin(QJsonObject response);
    void responeForUser(QJsonObject response);
    void responeForMainWindow(QJsonObject response);
    void requestConnection();
    void requestDisconnection();

private:
    explicit WindowManager(QObject *parent = nullptr);
    MainWindow * w ;
    AdminInterface * adminUI;
    UserInterface * userUI;


public slots:
    void responseReady(QJsonObject Data);
    void requestReady(QJsonObject Data);
    void logout(void);
    void createMainUI(void);
    void createAdminUI(void);
    void createUserUI(QString name);
    void closeAdminUI(void);
    void closeUserUI(void);
    void closeMainUI(void);
    void connectToTheServer();

private slots:

};

#endif // WINDOWMANAGER_H

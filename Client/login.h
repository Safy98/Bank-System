#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

signals:

    void loginDataAquired(QString username ,QString Password);

public slots:
    void failedLoginSlot(int errorState);

private slots:
    void on_pushButton_login_clicked();

    void on_lineEdit_username_textChanged(const QString &arg1);

    void on_lineEdit_password_textChanged(const QString &arg1);

private:
    Ui::Login *ui;


};

#endif // LOGIN_H

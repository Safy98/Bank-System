#ifndef AGETACCOUNTNUMWINDOW_H
#define AGETACCOUNTNUMWINDOW_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class AgetAccountNumWindow;
}

class AgetAccountNumWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AgetAccountNumWindow(QWidget *parent = nullptr);
    ~AgetAccountNumWindow();

   void responseSuccessfull(int accountNumber);
    void responseFailed(int errorState);

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_confirm_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

signals:
    void backPressed();
    void getAccountNumberRequest(QString username);

private:
    Ui::AgetAccountNumWindow *ui;
};

#endif // AGETACCOUNTNUMWINDOW_H

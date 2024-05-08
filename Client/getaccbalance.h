#ifndef GETACCBALANCE_H
#define GETACCBALANCE_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class GetAccBalance;
}

class GetAccBalance : public QDialog
{
    Q_OBJECT

public:
    explicit GetAccBalance(QWidget *parent = nullptr);
    ~GetAccBalance();
    void responseSuccessfull(QString balance);
    void responseFailed(int errorState);
signals:
    void GetAccountBalance(QString accountNumber);
    void backPressed();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_back_clicked();

    void on_lineEdit_accnum_textChanged(const QString &arg1);

private:
    Ui::GetAccBalance *ui;
};

#endif // GETACCBALANCE_H

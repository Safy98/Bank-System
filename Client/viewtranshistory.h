#ifndef VIEWTRANSHISTORY_H
#define VIEWTRANSHISTORY_H

#include <QDialog>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonArray>
namespace Ui {
class ViewTransHistory;
}

class ViewTransHistory : public QDialog
{
    Q_OBJECT

public:
    explicit ViewTransHistory(QWidget *parent = nullptr);
    ~ViewTransHistory();
   void responseSuccessfull(QJsonObject data);
   void responseFailed(int errorState);

signals:
    void backPressed();
    void sendViewTransHistory(QString accountNumber , QString count);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_spinBox_count_valueChanged(int arg1);

    void on_lineEdit_accountNum_textChanged(const QString &arg1);

private:
    Ui::ViewTransHistory *ui;
};

#endif // VIEWTRANSHISTORY_H

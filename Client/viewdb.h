#ifndef VIEWDB_H
#define VIEWDB_H

#include <QDialog>
#include <QJsonObject>
namespace Ui {
class ViewDB;
}

class ViewDB : public QDialog
{
    Q_OBJECT

public:
    explicit ViewDB(QWidget *parent = nullptr);
    ~ViewDB();

   void responseSuccessfull(QJsonObject);
signals:
    void backPressed(void);
private slots:
    void on_pushButton_back_clicked();

private:
    Ui::ViewDB *ui;
};

#endif // VIEWDB_H

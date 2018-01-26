#ifndef PASSWORD_H
#define PASSWORD_H
#include "mainw.h"
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>

class password : public QDialog
{
  Q_OBJECT
public:
    password(QWidget *parent=0);
private:
    QLineEdit *passwordinput;
    QPushButton *OK, *EXIT;
private slots:
    void ChekPass();
        signals:
    void getpw(QString string);
};


class str : public QObject
{
    Q_OBJECT
public slots:
    void getpw(QString string)
    {
        // password uganda_army
        QString psswrd = "uganda_army";
        if (string == psswrd)
        {
             mainw *wind  = new mainw();
             str1 *msg = new str1;
             QObject::connect(wind,SIGNAL(strT(QString)),msg,SLOT(strT(QString)));
             QObject::connect(wind,SIGNAL(invT(QString)),msg,SLOT(invT(QString)));
             wind->show();
        }
        else
        {
            QMessageBox kek;
            kek.setText("ERROR and get out de way");
            kek.exec();
        }
    }
};
#endif // PASSWORD_H

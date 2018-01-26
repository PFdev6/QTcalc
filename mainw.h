#ifndef mainw_h
#define mainw_h
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
class mainw: public QDialog
{
    Q_OBJECT

public:
    mainw(QWidget *parent=0);
private:
    QLabel *Name1;
    QPushButton *KEK, *two, *one, *three, *four, *five, *six, *seven, *eight, *nine;
    QLineEdit *linefind;
    QPushButton *BD;
    QPushButton *MTH;
private slots:
    void ClickedT();
    void ClickedT2();
    void TxtChanged(QString str);
        signals:
    void invT(QString str);
    void strT(QString str);
 };
class str1 : public QObject
{
    Q_OBJECT
public slots:

    void strT(QString str1)
    {
        QString str2 = " YOU DO NOT KNO DE WAY OF DE DEVAL!";
        str1+=str2;
        QMessageBox kek;
        kek.setText(str1);
        kek.exec();
    }
    void invT(QString str1)
    {
     QString wyr = " Why you running";
     QString clucking = "*CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *CLUCKING* *gitCLUCKING* *CLUCKING* *CLUCKING*   ";
     QString result = str1;
    for(int i=str1.size(), j=0; i>=0; i--, j++)
        {
         result[j]=str1[i];
        }
        result+=wyr+clucking;
        QMessageBox kekc;
        kekc.setText(result);
        kekc.exec();
    }
};

#endif

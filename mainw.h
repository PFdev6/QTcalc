#ifndef mainw_h
#define mainw_h
#include <QLine>
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
    QLine *display;
    QLabel *Name1;
    QPushButton *KEK, *MAth;
    QLineEdit *linefind;
    QPushButton *BD;
    QPushButton *MTH;
private slots:
    void ClickedT();
    void ClickedT2();
    void TxtChanged(QString str);
    void Math();
        signals:
    void MathConverting(QString string_int);
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
    void MathConverting(QString string_int)
    {
        double sum, dbstr1, dbstr2;
        QString str1, str2;
        QString chek = "1234567890+-%*/.";
      /*  string_int.remove(QChar(' '), Qt::CaseInsensitive);
         for(int i = 0; i < string_int.size(); i++)
         {
             for(int j = 0; j < chek.size();j++)
             {
                 if(string_int[i]!=chek[j])
                 {
                     string_int.remove(i,1);
                 }
             }
         }  */
        for(int i = 0; i < string_int.size(); i++)
            {
                if(string_int[i] == '+')     // 646+343
                    {
                    str1=string_int;
                    str1.remove(i,string_int.size()-i);
                    str2=string_int;
                    str2.remove(0,i+1);
                    dbstr1 = str1.toDouble();
                    dbstr2 = str2.toDouble();
                    sum=dbstr1+dbstr2;
                }
                if(string_int[i] == '-')
                    {
                    str1=string_int;
                    str1.remove(i,string_int.size()-i);
                    str2=string_int;
                    str2.remove(0,i+1);
                    dbstr1 = str1.toDouble();
                    dbstr2 = str2.toDouble();
                    sum=dbstr1-dbstr2;
                }
                if(string_int[i] == '*')
                    {
                    str1=string_int;
                    str1.remove(i,string_int.size()-i);
                    str2=string_int;
                    str2.remove(0,i+1);
                    dbstr1 = str1.toDouble();
                    dbstr2 = str2.toDouble();
                    sum=dbstr1*dbstr2;
                }
                if(string_int[i] == '/')
                    {
                    str1=string_int;
                    str1.remove(i,string_int.size()-i);
                    str2=string_int;
                    str2.remove(0,i+1);
                    dbstr1 = str1.toDouble();
                    dbstr2 = str2.toDouble();
                    sum=dbstr1/dbstr2;
                }

            }
         QString result = QString::number(sum);
        QString Answer = "Answer: ";
        Answer+=result;

        QMessageBox kekc;
        kekc.setText(Answer);
        kekc.exec();
    }

};
#endif

#include "password.h"
password::password(QWidget *parent) : QDialog(parent)
{
    EXIT = new QPushButton("Exit");
    OK = new QPushButton("OK");
    passwordinput = new QLineEdit;
    passwordinput->setText("InPut Password");
    QVBoxLayout *Mid = new QVBoxLayout;
    Mid->addWidget(passwordinput);
    QHBoxLayout *Buttons = new QHBoxLayout;
    Buttons->addWidget(OK);
    Buttons->addWidget(EXIT);
    Mid->addLayout(Buttons);
    setLayout(Mid);
    connect(EXIT, SIGNAL(clicked(bool)),this, SLOT(close()));
    connect(OK, SIGNAL(clicked(bool)),this, SLOT(ChekPass()));
};
void password::ChekPass()
{
    emit getpw(passwordinput->text());
}

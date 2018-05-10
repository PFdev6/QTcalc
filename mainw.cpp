#include "mainw.h"
mainw::mainw(QWidget *parent) : QDialog(parent)
{
            linefind = new QLineEdit;
            Name1 = new QLabel("do you know de way");
            QVBoxLayout *Mid = new  QVBoxLayout;
            QHBoxLayout *keflay = new QHBoxLayout;
            QVBoxLayout *kvurv = new QVBoxLayout;
            QHBoxLayout *buttonofsln = new QHBoxLayout;
            abc = new QLabel(" ax^2 + bx + c = 0 ");
            slnabc = new QPushButton(" Выполнить ");
            BD = new QPushButton("MBD");
            MTH = new QPushButton("MTH");
            KEK = new QPushButton("Exit");
            MAth = new QPushButton("Math");
            a = new QLineEdit;
            a->setText("a");
            b = new QLineEdit;
            b->setText("b");
            c = new QLineEdit;
            c->setText("c");
            MTH->setDefault(true);
            MTH->setEnabled(false);
            linefind->setEnabled(true);
            QHBoxLayout *UnderMid1 = new QHBoxLayout;
                UnderMid1->addWidget(MAth);

            QHBoxLayout *UnderUnder = new QHBoxLayout;
                UnderUnder-> addWidget(BD);
                UnderUnder-> addWidget(MTH);
                UnderUnder-> addWidget(KEK);


                /// kefy button
                kvurv->addLayout(buttonofsln);
                buttonofsln->addWidget(abc);
                buttonofsln->addWidget(slnabc);
                kvurv->addLayout(keflay);
                keflay-> addWidget(a);
                keflay-> addWidget(b);
                keflay-> addWidget(c);

                Mid->addWidget(linefind);
                Mid->addWidget(Name1);
                Mid->addLayout(UnderUnder);
                Mid->addLayout(UnderMid1);
                Mid->addLayout(keflay);
                Mid->addLayout(kvurv);
                Mid->addLayout(buttonofsln);
                setLayout(Mid);

                connect(KEK, SIGNAL(clicked(bool)),this, SLOT(exec()));
                connect(BD, SIGNAL(clicked()),this, SLOT(ClickedT()));
                connect(MTH, SIGNAL(clicked()),this, SLOT(ClickedT2()));
                connect(MAth, SIGNAL(clicked()),this, SLOT(Math()));
                connect(slnabc, SIGNAL(clicked()), this, SLOT(CarryOut()));
}
void mainw::TxtChanged(QString str)
{
    MTH->setEnabled(!str.isEmpty());
}
void mainw::ClickedT()
{
    emit strT(linefind->text());
}
void mainw::ClickedT2()
{
    emit invT(linefind->text());
}
void mainw::Math()
{
    emit MathConverting(linefind->text());
}
void mainw::CarryOut()
{
    emit SlvsEquation(a->text(), b->text(), c->text());
}


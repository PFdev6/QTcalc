#include "mainw.h"
mainw::mainw(QWidget *parent) : QDialog(parent)
{
            linefind = new QLineEdit;
            Name1 = new QLabel("do you know de way");
            QVBoxLayout *Mid = new  QVBoxLayout;
            one = new QPushButton("1");
            two = new QPushButton("2");
            three = new QPushButton("3");
            four = new QPushButton("4");
            five = new QPushButton("5");
            six = new QPushButton("6");
            seven = new QPushButton("7");
            eight = new QPushButton("8");
            nine = new QPushButton("9");
            BD = new QPushButton("MBD");
            MTH = new QPushButton("MTH");
            KEK = new QPushButton("KEK");
            MTH->setDefault(true);
            MTH->setEnabled(false);
            linefind->setEnabled(true);
            one->setDefault(true);
            QHBoxLayout *UnderMid1 = new QHBoxLayout;
               UnderMid1->addWidget(one);
               UnderMid1->addWidget(two);
               UnderMid1->addWidget(three);
            QHBoxLayout *UnderMid2 = new QHBoxLayout;
               UnderMid2->addWidget(four);
               UnderMid2->addWidget(five);
               UnderMid2->addWidget(six);
            QHBoxLayout *KekLO = new QHBoxLayout;
                KekLO->addWidget(seven);
                KekLO->addWidget(eight);
                KekLO->addWidget(nine);
            QHBoxLayout *UnderUnder = new QHBoxLayout;
                UnderUnder-> addWidget(BD);
                UnderUnder-> addWidget(MTH);
                UnderUnder-> addWidget(KEK);

                Mid->addWidget(linefind);
                Mid->addWidget(Name1);
                Mid->addLayout(UnderUnder);
                Mid->addLayout(UnderMid1);
                Mid->addLayout(UnderMid2);
                Mid->addLayout(KekLO);
                setLayout(Mid);

                connect(KEK, SIGNAL(clicked(bool)),this, SLOT(close()));
                connect(linefind, SIGNAL(textChanged(QString)),this, SLOT(TxtChanged(QString)));
                connect(BD, SIGNAL(clicked()),this, SLOT(ClickedT()));
                connect(MTH, SIGNAL(clicked()),this, SLOT(ClickedT2()));
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

#include "mainw.h"
mainw::mainw(QWidget *parent) : QDialog(parent)
{
            linefind = new QLineEdit;

            Name1 = new QLabel("do you know de way");
            QVBoxLayout *Mid = new  QVBoxLayout;
            BD = new QPushButton("MBD");
            MTH = new QPushButton("MTH");
            KEK = new QPushButton("Exit");
            MAth = new QPushButton("Math");
            MTH->setDefault(true);
            MTH->setEnabled(false);
            linefind->setEnabled(true);
            QHBoxLayout *UnderMid1 = new QHBoxLayout;
                UnderMid1->addWidget(MAth);

            QHBoxLayout *UnderUnder = new QHBoxLayout;
                UnderUnder-> addWidget(BD);
                UnderUnder-> addWidget(MTH);
                UnderUnder-> addWidget(KEK);

                Mid->addWidget(linefind);
                Mid->addWidget(Name1);
                Mid->addLayout(UnderUnder);
                Mid->addLayout(UnderMid1);
                setLayout(Mid);

                connect(KEK, SIGNAL(clicked(bool)),this, SLOT(close()));
                connect(BD, SIGNAL(clicked()),this, SLOT(ClickedT()));
                connect(MTH, SIGNAL(clicked()),this, SLOT(ClickedT2()));
                connect(MAth, SIGNAL(clicked()),this, SLOT(Math()));

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



#include <QApplication>
#include <QLabel>    // Вывод текста
#include <QSpinBox> // Счетчик
#include <QSlider> // Прокрутка
#include <QPushButton> // Кнопка
#include <QHBoxLayout> // Слой(виджеты по горизонтали)
#include "mainw.h"

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);

    mainw *wind  = new mainw();
    wind->show();

    str1 *msg= new str1;
    QObject::connect(wind,SIGNAL(strT(QString)),msg,SLOT(strT(QString)));
    QObject::connect(wind,SIGNAL(invT(QString)),msg,SLOT(invT(QString)));
    return a.exec();
}

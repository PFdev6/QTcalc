
#include <QApplication>
#include <QLabel>    // Вывод текста
#include <QSpinBox> // Счетчик
#include <QSlider> // Прокрутка
#include <QPushButton> // Кнопка
#include <QHBoxLayout> // Слой(виджеты по горизонтали)
#include "mainw.h"
#include "password.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    str *msg2 = new str;
     password *pw  = new password();
            pw->show();

    QObject::connect(pw,SIGNAL(getpw(QString)),msg2,SLOT(getpw(QString)));

    return a.exec();
}

#include "piegame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PieGame w;
    w.setFixedSize(300, 300);
    w.show();
    return a.exec();
}

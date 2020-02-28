#include "piegame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PieGame w;
    w.show();
    return a.exec();
}

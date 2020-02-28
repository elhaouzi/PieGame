#ifndef PIEGAME_H
#define PIEGAME_H

#include <QMainWindow>


class PieGame : public QMainWindow
{
    Q_OBJECT

public:
    PieGame(QWidget *parent = Q_NULLPTR);
    ~PieGame();
};
#endif // PIEGAME_H

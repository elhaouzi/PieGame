#ifndef PIEGAME_H
#define PIEGAME_H

#include <QWidget>

class PieGame : public QWidget
{
    Q_OBJECT

public:
    PieGame(QWidget *parent = Q_NULLPTR);
    ~PieGame();
};
#endif // PIEGAME_H

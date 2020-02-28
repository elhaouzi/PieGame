#ifndef PIEGAME_H
#define PIEGAME_H

#include <QMainWindow>

class QGraphicsView;

class PieGame : public QMainWindow
{
    Q_OBJECT

public:
    PieGame(QWidget *parent = Q_NULLPTR);
    ~PieGame();

private:
    QGraphicsView* view;
};
#endif // PIEGAME_H

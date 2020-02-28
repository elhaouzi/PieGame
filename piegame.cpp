#include "piegame.h"

#include <QGraphicsScene>
#include <QGraphicsView>

#include "superitem.h"


PieGame::PieGame(QWidget *parent)
    : QMainWindow(parent)
{
    auto view = new QGraphicsView;
    auto scene = new QGraphicsScene(0, 0, 300, 300, view);
    view->setScene(scene);

    scene->setBackgroundBrush(Qt::black);

    auto super = new SuperItem;
    scene->addItem(super);

    setCentralWidget(view);

    super->setFocus();
}

PieGame::~PieGame()
{
}


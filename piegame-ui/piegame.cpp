#include "piegame.h"

#include <QGraphicsScene>
#include <QGraphicsView>

#include "superitem.h"
#include "dot.h"


PieGame::PieGame(QWidget *parent)
    : QMainWindow(parent)
{
    view = new QGraphicsView;
    auto scene = new QGraphicsScene(0, 0, 300, 300, view);
    view->setScene(scene);

    scene->setBackgroundBrush(Qt::black);

    auto super = new SuperItem(view);
    scene->addItem(super);

    setCentralWidget(view);

    super->setFocus();

    //add 100 faces
    for (auto i = 0; i< 10; ++i) {
        for (auto j = 0; j< 10; ++j) {
            auto dot = new Dot;
            dot->setPos(i*30, j*30);
            scene->addItem(dot);
        }
    }

    //turn off scrollbar
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

PieGame::~PieGame()
{
}



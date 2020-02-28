#include "superitem.h"

#include<QtGui>


SuperItem::SuperItem(QGraphicsItem *parent)
    : QGraphicsItem(parent)
{

}

void SuperItem::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->
        drawRoundedRect(0, 0, 30, 30, 5, 5);

}

QRectF SuperItem::boundingRect() const
{
    return QRectF(0, 0, 30, 30);
}

void SuperItem::keyPressEvent(QKeyEvent *event)
{

}

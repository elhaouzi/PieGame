#include "dot.h"

#include<QtGui>

#include "utils.h"

Dot::Dot(QGraphicsItem *parent)
    : QGraphicsItem(parent),
      m_eaten(false)
{

}

void Dot::paint(QPainter *painter,
                const QStyleOptionGraphicsItem *option,
                QWidget *widget)
{
    UNUSED(option); UNUSED(widget); // remove warnning unused variable

    if(collidingItems().size()>0){
        m_eaten = true;
    }

    if(!m_eaten){
        painter->setBrush(Qt::white);
        painter->drawPixmap(5, 5, 25, 25, QPixmap(":/face.png"));
    }
}

QRectF Dot::boundingRect() const
{
    return QRectF(0, 0, 30, 30);
}

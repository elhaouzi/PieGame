#include "superitem.h"

#include<QtGui>


SuperItem::SuperItem(QGraphicsItem *parent)
    : QGraphicsItem(parent),
      m_rotation(0)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
}

void SuperItem::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    painter->translate(15, 15);
    painter->rotate(m_rotation);
    painter->translate(-15, -15);

    painter->setBrush(Qt::yellow);
    painter->drawPie(0, 0, 30, 30, -45*16, -270*16);

}

QRectF SuperItem::boundingRect() const
{
    return QRectF(0, 0, 30, 30);
}

void SuperItem::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key_Right: {
            moveBy(30, 0);
            m_rotation = 0;
            break;
        }
        case Qt::Key_Left: {
            moveBy(-30, 0);
            m_rotation = 180;
            break;
        }
        case Qt::Key_Up: {
            moveBy(0, -30);
            m_rotation = 270;
            break;
        }
        case Qt::Key_Down: {
            moveBy(0, 30);
            m_rotation = 90;
            break;
        }
        //update(); not neded, covred by rect in this item
    }

}

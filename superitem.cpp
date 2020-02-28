#include "superitem.h"
#include "utils.h"
#include<QtGui>
#include<QGraphicsView>


SuperItem::SuperItem(QGraphicsView* view, QGraphicsItem *parent)
    : QGraphicsItem(parent),
      m_rotation(0),
      m_view(view)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
}

void SuperItem::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    UNUSED(option); UNUSED(widget);

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
            if(pos().x() < m_view->width() - 30){
                moveBy(30, 0);
                m_rotation = 0;
            }
            break;
        }
        case Qt::Key_Left: {
            if(pos().x() > 0){
                moveBy(-30, 0);
                m_rotation = 180;
            }
            break;
        }
        case Qt::Key_Up: {
            if(pos().y() > 0){
                moveBy(0, -30);
                m_rotation = 270;
            }
            break;
        }
        case Qt::Key_Down: {
            if(pos().y() < m_view->height() - 30){
                moveBy(0, 30);
                m_rotation = 90;
            }
            break;
        }
    }

}

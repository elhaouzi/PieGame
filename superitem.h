#ifndef SUPERITEM_H
#define SUPERITEM_H

#include <QGraphicsItem>

class SuperItem : public QGraphicsItem
{
public:
    explicit SuperItem(QGraphicsItem* parent = Q_NULLPTR);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR) override;
    QRectF boundingRect() const override;
    virtual void keyPressEvent(QKeyEvent *event) override;

};

#endif // SUPERITEM_H

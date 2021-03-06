#ifndef SUPERITEM_H
#define SUPERITEM_H

#include <QGraphicsItem>

class QGraphicsView;

class SuperItem : public QGraphicsItem
{
public:
    explicit SuperItem(QGraphicsView* view, QGraphicsItem* parent = Q_NULLPTR);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR) override;
    QRectF boundingRect() const override;
    virtual void keyPressEvent(QKeyEvent *event) override;
private:
    int m_rotation;
    QGraphicsView* m_view;
};

#endif // SUPERITEM_H

#ifndef DOT_H
#define DOT_H

#include <QGraphicsItem>

class Dot: public QGraphicsItem
{
public:
    explicit Dot(QGraphicsItem* parent = nullptr);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = Q_NULLPTR) override;

    QRectF boundingRect() const override;

private:
    bool m_eaten;
};

#endif // DOT_H

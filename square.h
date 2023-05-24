#ifndef SQUARE_H
#define SQUARE_H

#include "abstractshape.h"

class Square : public AbstractShape
{
public:
    Square(const QPoint &_pos, int _size, QBrush _brush, QPen _pen)
        : AbstractShape(_brush, _pen), pos(_pos), sideLength(_size) {};

    void print() override;
    void draw(QPainter &painter) override;
    void move(const QPoint &offset) override { pos += offset; };
    bool isPointInside(const QPoint &point) const override;


private:
    QPoint  pos;
    int     sideLength;
};

#endif // SQUARE_H

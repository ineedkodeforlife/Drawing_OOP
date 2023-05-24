#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "abstractshape.h"

class Triangle : public AbstractShape
{
public:
    Triangle(const std::array<QPoint, 3> &_points, QBrush _brush, QPen _pen)
        : AbstractShape(_brush, _pen), points(_points) {};

    void print() override;
    void draw(QPainter &painter) override;
    void move(const QPoint &offset) override;
    bool isPointInside(const QPoint &point) const override;


private:
    std::array<QPoint, 3>   points;
};

#endif // TRIANGLE_H

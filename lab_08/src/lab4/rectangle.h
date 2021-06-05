#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

namespace Shapes
{
class Rectangle : public Shape
{
private:
    Point lb;
    Point rt;

public:
    Rectangle(int xFrom, int yFrom, int xTo, int yTo);
    bool isIn(int x, int y) const override;

    int getX() const;
    int getY() const;

    int getXTo() const;
    int getYTo() const;
};
} // namespace Shapes

#endif // RECTANGLE_H

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "cmath"

namespace Shapes
{
class Circle : public Shape
{
private:
    int radius;
    int middle_x;
    int middle_y;
public:
    Circle(int radius, int middle_x, int middle_y);
    bool isIn(int x, int y) const override;
    int getX() const;
    int getY() const;
    int getRadius() const;
    // TODO:
};
} // namespace Shapes

#endif // CIRCLE_H

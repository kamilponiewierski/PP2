
#include "circle.h"

bool Shapes::Circle::isIn(int x, int y) const
{
    return pow((x - middle_x), 2) + pow((y - middle_y), 2) <= pow(radius, 2);
}

Shapes::Circle::Circle(int middle_x, int middle_y, int radius) : radius(radius), middle_x(middle_x), middle_y(middle_y)
{

}

int Shapes::Circle::getX() const
{
    return middle_x;
}

int Shapes::Circle::getY() const
{
    return middle_y;
}

int Shapes::Circle::getRadius() const
{
    return radius;
}



#include "rectangle.h"

bool Shapes::Rectangle::isIn(int x, int y) const
{
    return getX() <= x && x <= getXTo() && getY() <= y && y <= getYTo();
}

Shapes::Rectangle::Rectangle(int xFrom, int yFrom, int xTo, int yTo) : lb(Point(xFrom, yFrom)), rt(Point(xTo, yTo))
{

}

int Shapes::Rectangle::getX() const
{
    return lb.first;
}

int Shapes::Rectangle::getY() const
{
    return lb.second;
}

int Shapes::Rectangle::getXTo() const
{
    return rt.first;
}

int Shapes::Rectangle::getYTo() const
{
    return rt.second;
}


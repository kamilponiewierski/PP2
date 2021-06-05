#ifndef PP2_PROSTOKAT_H
#define PP2_PROSTOKAT_H

#include "Shape.h"
#include "iostream"

class Prostokat
{
private:
    double height;
    double width;

public:
    double area() const
    {
        return getHeight() * getWidth();
    }

    double perimeter() const
    {
        return 2 * (getWidth() + getHeight());
    }

    Prostokat(double height, double width)
    {
        setHeight(height);
        setWidth(width);
        std::cout << "tworze prostokat o bokach " << height << ", " << width << std::endl;
    }

    explicit Prostokat(double side)
    {
        setHeight(side);
        setWidth(side);
        std::cout << "tworze kwadrat o boku " << side << std::endl;
    }

    double getHeight() const
    {
        return height;
    }

    double getWidth() const
    {
        return width;
    }

    void setHeight(double height)
    {
        Prostokat::height = height;
    }

    void setWidth(double width)
    {
        Prostokat::width = width;
    }

    void print() const
    {
        std::cout << this->area() << " " << this->perimeter() << std::endl;
    }

};


#endif //PP2_PROSTOKAT_H

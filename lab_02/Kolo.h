
#ifndef PP2_KOLO_H
#define PP2_KOLO_H


#include "Shape.h"
#include "cmath"
#include "iostream"

class Kolo
{
private:
    double radius;
    const double pi = M_PI;

public:
    double area() const
    {
        return getRadius() * getRadius() * getPi();
    }

    double perimeter() const
    {
        return 2 * getPi() * getRadius();
    }

    explicit Kolo(double diameter)
    {
        std::cout << "tworze kolo o promieniu " << diameter << std::endl;
        setRadius(diameter);
    }

    Kolo()
    {
        std::cout << "tworze kolo z domyslna wartoscia" << std::endl;
        setRadius(1);
    }

    double getRadius() const
    {
        return radius;
    }

    double getPi() const
    {
        return pi;
    }

    void setRadius(double diameter)
    {
        Kolo::radius = diameter;
    }

    void print()
    {
        std::cout << this->area() << " " << this->perimeter() << std::endl;
    }
};


#endif //PP2_KOLO_H

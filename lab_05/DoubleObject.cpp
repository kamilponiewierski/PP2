
#include "DoubleObject.h"

DoubleObject::DoubleObject(double value) : value(value)
{

}

Object *DoubleObject::clone()
{
    return new DoubleObject(value);
}

std::string DoubleObject::toString()
{
    return this->className() + " - value: " + std::to_string(this->value) + '\n';
}

double DoubleObject::getValue() const
{
    return value;
}


#include "IntObject.h"

IntObject::IntObject(int value) : value(value)
{

}

std::string IntObject::toString()
{
    return this->className() + " - value: " + std::to_string(value) + '\n';
}

Object *IntObject::clone()
{
    return new IntObject(value);
}

int IntObject::getValue() const
{
    return value;
}

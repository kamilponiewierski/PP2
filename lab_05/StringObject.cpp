
#include <cstring>
#include "StringObject.h"

StringObject::StringObject(char *value) : size(strlen(value)), value(value)
{

}

std::string StringObject::toString()
{
    return this->className() + " - size: " + std::to_string(this->size) + " value: " + value + '\n';
}

Object *StringObject::clone()
{
    return new StringObject(value);
}

char *StringObject::getValue() const
{
    return value;
}

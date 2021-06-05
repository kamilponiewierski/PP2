#ifndef PP2_STRINGOBJECT_H
#define PP2_STRINGOBJECT_H


#include <cstdio>
#include <cstdlib>
#include "Object.h"

class StringObject : public Object
{
private:
    char *value;
    size_t size;

    std::string className() override
    {
        return "StringObject";
    }

public:
    StringObject(char *value);

    std::string toString() override;

    Object *clone() override;

    char *getValue() const;
};


#endif //PP2_STRINGOBJECT_H

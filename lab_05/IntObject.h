
#ifndef PP2_INTOBJECT_H
#define PP2_INTOBJECT_H


#include "Object.h"

class IntObject : public Object
{
private:
    int value;

    std::string className() override
    {
        return "IntObject";
    }


public:
    IntObject(int value);

    std::string toString() override;

    Object *clone() override;

    int getValue() const;
};


#endif //PP2_INTOBJECT_H

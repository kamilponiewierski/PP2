
#ifndef PP2_DOUBLEOBJECT_H
#define PP2_DOUBLEOBJECT_H


#include "Object.h"

class DoubleObject : public Object
{
private:
    double value;

    std::string className() override
    {
        return "DoubleObject";
    }


public:
    DoubleObject(double value);

    std::string toString() override;

    Object *clone() override;

    double getValue() const;
};


#endif //PP2_DOUBLEOBJECT_H

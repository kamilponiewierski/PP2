
#ifndef PP2_OBJECT_H
#define PP2_OBJECT_H

#include <cstdio>
#include <iostream>

class Object
{
private:
    virtual std::string className()
    {
        return "Object";
    }

public:
    void whatAmI()
    {
        std::cout << "I'm a(n) " + className() + '\n';
    }


    virtual std::string toString() = 0;

    virtual Object *clone() = 0;

    virtual ~Object() = default;
};


#endif //PP2_OBJECT_H

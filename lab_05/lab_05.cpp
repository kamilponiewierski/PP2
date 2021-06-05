
#include <cassert>
#include <vector>
#include "lab_05.h"
#include "StringObject.h"
#include "IntObject.h"
#include "DoubleObject.h"

void printDoubleSum(const std::vector<Object *> &v)
{

    double sum = 0.0;
    for (auto &object: v)
    {
        auto cast = dynamic_cast<DoubleObject *>(object);
        if (cast == nullptr) continue;
        sum += cast->getValue();
    }

    std::cout << sum << std::endl;
}

void cleanUp(std::vector<Object *> &v)
{
    while (!v.empty())
    {
        Object *o = v.back();
        v.pop_back();

        delete o;
    }
}

void lab_05()
{
    auto v = std::vector<Object *>();

    // StringObject

    Object *string = new StringObject("asdf");
    v.push_back(string);

    auto string2 = new StringObject("vnslkdf");
    v.push_back(string2);
    assert(string->toString() != string2->toString());

    auto stringClone = string->clone();
    v.push_back(stringClone);
    assert(stringClone->toString() == string->toString());
    std::cout << stringClone->toString();

    string->whatAmI();
    std::cout << std::endl;

    // IntegerObject

    Object *integer = new IntObject(4);
    v.push_back(integer);
    auto otherInteger = new IntObject(42);
    v.push_back(otherInteger);
    assert(integer->toString() != otherInteger->toString());

    std::cout << integer->toString();
    auto cloneInt = integer->clone();
    v.push_back(cloneInt);
    assert(cloneInt->toString() == integer->toString());

    integer->whatAmI();
    std::cout << std::endl;

    // DoubleObject

    Object *doubleObject = new DoubleObject(3.14);
    v.push_back(doubleObject);
    auto dObject = new DoubleObject(5.21);
    v.push_back(dObject);
    assert(dObject->toString() != doubleObject->toString());

    Object *cloneDouble = doubleObject->clone();
    v.push_back(cloneDouble);
    assert(doubleObject->toString() == cloneDouble->toString());
    std::cout << cloneDouble->toString();

    doubleObject->whatAmI();
    std::cout << std::endl;

    printDoubleSum(v);
    cleanUp(v);
}



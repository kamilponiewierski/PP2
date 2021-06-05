
#include <iostream>
#include <pprintpp/pprintpp.hpp>

void pprint(int a, int b)
{
    pprintf("{}, {}\n", a, b);
}

void pprint(int a)
{
    pprintf("{}\n", a);
}

void pprint(double d)
{
    pprintf("{}\n", d);
}

void pprint(const char *c = "42")
{
    int i = 0;
    while (*(c + i) != '\0')
    {
        pprintf("{}", *(c + i));
        i++;
    }
    pprintf("\n");
}


int main()
{
    pprint(5, 2);
    pprint("123");
    pprint(123);
    pprint(32.122);
}
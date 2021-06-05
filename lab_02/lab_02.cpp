
#include "lab_02.h"

void lab_02()
{
    Prostokat p = Prostokat(2, 4);

    p.print();
    p.setHeight(100);
    p.print();

    Prostokat s = Prostokat(5);
    s.print();

    Kolo k = Kolo(5);
    k.print();

    const Kolo ks = Kolo(123);
    ks.area();
    std::cout << "getter dla stalego obiektu: " << ks.getPi() << std::endl;

    Kolo k2 = Kolo();
    k2.print();
}

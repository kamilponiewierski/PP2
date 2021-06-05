
#include "lab_03.h"
#include "Tekst.h"

void lab_03()
{
    // Zadanie 1
    std::cout << Zwierze::liczbaZwierzat << std::endl;
    Zwierze zwierze = Zwierze("Pimpek", "pies");
    DobrzeZnanyKolega kolegaDaniel =
            DobrzeZnanyKolega("okulary", "Daniel", zwierze,
                              "facebook", "fryzura");

    CzlowiekZnanyZInternetu czlowiekZnanyZInternetu =
            CzlowiekZnanyZInternetu("twitter", "nick");

    std::cout << Zwierze::liczbaZwierzat << std::endl;

    std::cout << kolegaDaniel.getZwierze().getImie() << std::endl;

    Zwierze drugieZwierze = Zwierze("Krowa", "kot");

    std::cout << Zwierze::liczbaZwierzat << std::endl;

    // Zadanie 2

    const char *text = "asd\0";

    Tekst tekst = Tekst();
    tekst.setNewText(text);

    std::cout << tekst.getSize() << std::endl;
    std::cout << tekst.getString() << std::endl;

    Tekst kopia = Tekst(tekst);

    std::cout << kopia.getString() << " " << kopia.getSize() << std::endl;

    kopia.setNewText("nowy tekst");
    std::cout << kopia.getString() << " " << kopia.getSize() << std::endl;
}

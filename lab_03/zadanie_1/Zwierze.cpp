
#include "Zwierze.h"

int Zwierze::liczbaZwierzat = 0;

Zwierze::Zwierze(const char *imie, const char *gatunek)
{
    Zwierze::liczbaZwierzat++;
    this->imie = std::string(imie);
    this->gatunek = std::string(gatunek);
}

const std::string &Zwierze::getImie() const
{
    return imie;
}

const std::string &Zwierze::getGatunek() const
{
    return gatunek;
}

Zwierze::~Zwierze()
{
    Zwierze::liczbaZwierzat--;
}

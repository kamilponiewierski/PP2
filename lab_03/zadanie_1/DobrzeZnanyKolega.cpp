
#include "DobrzeZnanyKolega.h"

DobrzeZnanyKolega::DobrzeZnanyKolega(const char *cecha, const char *imie,
                                     Zwierze &zwierze, const char *skadGoZnam,
                                     const char *czymZwrocilUwage)
        : CzlowiekZnanyZImienia(cecha, imie),
          CzlowiekZnanyZInternetu(skadGoZnam, czymZwrocilUwage),
          zwierze(zwierze)
{

}

const std::string &DobrzeZnanyKolega::getSkadGoZnam() const
{
    return skadGoZnam;
}

Zwierze &DobrzeZnanyKolega::getZwierze() const
{
    return zwierze;
}

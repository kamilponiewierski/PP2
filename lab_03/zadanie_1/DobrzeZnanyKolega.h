
#ifndef PP2_DOBRZEZNANYKOLEGA_H
#define PP2_DOBRZEZNANYKOLEGA_H

#include "string"
#include "Zwierze.h"
#include "CzlowiekZnanyZImienia.h"
#include "CzlowiekZnanyZInternetu.h"

class DobrzeZnanyKolega : private CzlowiekZnanyZImienia, private CzlowiekZnanyZInternetu
{
protected:
    std::string skadGoZnam;
    Zwierze &zwierze;

public:
    DobrzeZnanyKolega(const char *cecha, const char *imie,
                      Zwierze &zwierze, const char *skadGoZnam,
                      const char *czymZwrocilUwage);

    const std::string &getSkadGoZnam() const;

    Zwierze &getZwierze() const;

};


#endif //PP2_DOBRZEZNANYKOLEGA_H

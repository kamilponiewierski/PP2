
#ifndef PP2_CZLOWIEKZNANYZIMIENIA_H
#define PP2_CZLOWIEKZNANYZIMIENIA_H


#include "CzlowiekZnanyZWidzenia.h"

class CzlowiekZnanyZImienia : private CzlowiekZnanyZWidzenia
{
protected:
    std::string imie;

public:
    CzlowiekZnanyZImienia(const char* cecha, const char* imie);
};


#endif //PP2_CZLOWIEKZNANYZIMIENIA_H


#ifndef PP2_CZLOWIEKZNANYZWIDZENIA_H
#define PP2_CZLOWIEKZNANYZWIDZENIA_H

#include "string"
class CzlowiekZnanyZWidzenia
{
protected:
    std::string cechaCharakterystyczna;

public:
    explicit CzlowiekZnanyZWidzenia(const char* cecha)
    {
        this->cechaCharakterystyczna = std::string(cecha);
    }
};


#endif //PP2_CZLOWIEKZNANYZWIDZENIA_H

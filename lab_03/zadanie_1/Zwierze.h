
#ifndef PP2_ZWIERZE_H
#define PP2_ZWIERZE_H

#include "string"
class Zwierze{
private:
    std::string imie;
    std::string gatunek;

public:
    static int liczbaZwierzat;
    Zwierze(const char* imie, const char* gatunek);

    ~Zwierze();

    const std::string &getImie() const;

    const std::string &getGatunek() const;
};


#endif //PP2_ZWIERZE_H

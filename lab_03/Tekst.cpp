
#include <cstring>
#include "Tekst.h"

Tekst::Tekst() : size(0), String(new char[0])
{}


Tekst::Tekst(const char *tekst) : size(strlen(tekst) + 1)
{
    delete[] String;
    String = new char[size + 1];
    strcpy(String, tekst);
    String[size - 1] = '\0';
}

Tekst::~Tekst()
{
    delete[] String;
}

Tekst::Tekst(const Tekst &tekst) : size(tekst.size)
{
    this->String = new char[size];
    memcpy(String, tekst.String, size);
}

void Tekst::setNewText(const char *newText)
{
    delete[] this->String;

    this->size = strlen(newText) + 1;
    this->String = new char[size];

    strcpy(String, newText);
    String[size - 1] = '\0';
}

int Tekst::getSize() const
{
    return this->size;
}

char *Tekst::getString() const
{
    return String;
}


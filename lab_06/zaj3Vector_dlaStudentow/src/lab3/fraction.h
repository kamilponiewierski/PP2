#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>

/** Implementacja ulamka:
Zaimplementuj klase Ulamek (ang. Fraction), posiadająca licznik (ang. numerator) i mianownik (ang. denominator).
       Powinna zawierac jeden konstruktor ustawiajacy licznik i mianownik (domyslne wartosci licznika=0 a mianownika domyslna 1)
       Gettery i settery do wartosci licznika i mianownika
          Settery nie powinny skracac ulamkow
       operator+ dla ulamka zwracajacy ulamek
       operator* dla ulamka zwracajacy ulamek
Niepoprawny mianownik powinien byc zglaszany przez wyjatek std::invalid_argument.
Prosze o skracanie ulamkow po operacji + i * (pomocny moze sie okazac algorytm euklidesa), oczywiscie tutaj robimy tylko dla przypadkow dodatnich
**/

class Fraction
{

public:
    explicit Fraction(int numerator = 0, int denominator = 1);

    int getNumerator() const;

    void setNumerator(int numerator);

    int getDenominator() const;

    void setDenominator(int denominator);

    Fraction operator+(const Fraction &b);

    Fraction operator*(const Fraction &b);


private:
    int euclid_gcd_recur(int m, int n);


private:
    int numerator{};
    int denominator{};

};

#endif // FRACTION_H

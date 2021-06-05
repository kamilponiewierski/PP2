#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
    setNumerator(numerator);
    setDenominator(denominator);
}

int Fraction::getNumerator() const
{
    return numerator;
}

void Fraction::setNumerator(int numerator)
{
    Fraction::numerator = numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}

void Fraction::setDenominator(int denominator)
{
    if (denominator == 0)
    {
        throw std::invalid_argument("denominator should not be 0");
    }
    Fraction::denominator = denominator;
}


Fraction Fraction::operator+(const Fraction &b)
{
    int lcm = (this->denominator * b.denominator) / euclid_gcd_recur(this->denominator, b.denominator);

    int newNumerator =
            this->getNumerator() * (lcm / this->getDenominator()) + b.getNumerator() * (lcm / b.getDenominator());
    int newDenominator = lcm;

    int newGcd = euclid_gcd_recur(newNumerator, newDenominator);

    this->setNumerator(newNumerator / newGcd);
    this->setDenominator(newDenominator / newGcd);

    return *this;
}

int Fraction::euclid_gcd_recur(int m, int n)
{
    if (n == 0)
        return m;

    return Fraction::euclid_gcd_recur(n, m % n);
}

Fraction Fraction::operator*(const Fraction &b)
{
    this->setNumerator(this->getNumerator() * b.getNumerator());
    this->setDenominator(this->getDenominator() * b.getDenominator());
    return *this;
}

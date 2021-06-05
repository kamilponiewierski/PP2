// author: Grzegorz Prowadzacy

#include "vector.h"

#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
#warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
#pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif

// TODO: zaimplementowac metody klasy, usunac ten komentarz i warning powyzszy
int Vector::size() const
{
    return size_;
}

size_t Vector::capacity() const
{
    return capacity_;
}

Vector::Vector(size_t capacity) : size_(0), capacity_(capacity)
{
    data = new Fraction[size_];
}

Vector::~Vector()
{
    delete[] data;
}

void Vector::push_back(Fraction f)
{
    if (this->capacity() == this->size_)
    {
        this->data = static_cast<Fraction *>(realloc(this->data, this->size_ + 1));
        this->capacity_ += 1;
    }
    this->size_ += 1;
    this->data[size() - 1] = f;

}

Fraction Vector::operator[](size_t i) const
{
    if (i >= this->size())
    {
        throw std::out_of_range("index larger than vector size");
    }
    return this->data[i];
}

Vector &Vector::operator=(Vector other)
{

}

Vector::Vector(const Vector &other) : size_(other.size()), capacity_(other.capacity())
{
    this->data = new Fraction[other.capacity()];
    for (int i = 0; i < other.size(); i++)
    {
        this->data[i] = Fraction(other.data->getNumerator(), other.data->getDenominator());
    }
}

Vector::Vector(Vector &&source) : data(source.data)
{
    source.data = nullptr;
}





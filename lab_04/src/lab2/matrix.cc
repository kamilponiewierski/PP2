#include <iostream>

using namespace std;

#include "matrix.h"

#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
#warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
#pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif

TwoDimensionMatrix::TwoDimensionMatrix()
{
    for (int i = 0; i < (int) size; ++i)
    {
        for (int j = 0; j < (int) size; ++j)
        {
            matrix[i][j] = 0;
        }
    }
}

MatrixElement TwoDimensionMatrix::get(int row, int column) const
{
    return matrix[row][column];
}

TwoDimensionMatrix::TwoDimensionMatrix(const MatrixElement (&matrix)[size][size])
{
    for (int i = 0; i < (int) size; ++i)
    {
        for (int j = 0; j < (int) size; ++j)
        {
            this->matrix[i][j] = matrix[i][j];
        }

    }
}

TwoDimensionMatrix::TwoDimensionMatrix(TwoDimensionMatrix const &source)
{
    for (int i = 0; i < (int) size; ++i)
    {
        for (int j = 0; j < (int) size; ++j)
        {
            this->matrix[i][j] = source.get(i, j);
        }

    }
}

MatrixElement *TwoDimensionMatrix::operator[](size_t i)
{
    return matrix[i];
}


void TwoDimensionMatrix::operator*=(MatrixElement numberToMultiplyBy)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            matrix[i][j] *= numberToMultiplyBy;
        }
    }
}

TwoDimensionMatrix TwoDimensionMatrix::operator&&(const TwoDimensionMatrix &b) const
{
    MatrixElement m[size][size] = {};

    for (int i = 0; i < (int) size; ++i)
    {
        for (int j = 0; j < (int) size; ++j)
        {
            MatrixElement l = (*this)[i][j];
            MatrixElement r = b[i][j];
            m[i][j] = l && r;
        }
    }

    auto out = new TwoDimensionMatrix(m);

    return *out;
}

TwoDimensionMatrix TwoDimensionMatrix::operator+(const TwoDimensionMatrix &b) const
{

    MatrixElement m[size][size] = {};

    for (int i = 0; i < (int) size; ++i)
    {
        for (int j = 0; j < (int) size; ++j)
        {
            MatrixElement l = (*this)[i][j];
            MatrixElement r = b[i][j];
            m[i][j] = l + r;
        }
    }

    auto out = new TwoDimensionMatrix(m);

    return *out;

}

const MatrixElement *TwoDimensionMatrix::operator[](size_t i) const
{
    auto *copy = new MatrixElement[size];

    for (int j = 0; j < (int) size; ++j)
    {
        copy[j] = matrix[i][j];
    }
    return copy;
}

TwoDimensionMatrix &TwoDimensionMatrix::operator=(const TwoDimensionMatrix &b)
{
    if (this == &b)
    {
        return *this;
    }

    for (int i = 0; i < int(size); ++i)
    {
        for (int j = 0; j < int(size); ++j)
        {
            this->matrix[i][j] = b[i][j];
        }

    }
    return *this;
}


std::ostream &operator<<(ostream &os, const TwoDimensionMatrix &source)
{
    for (int i = 0; i < (int) TwoDimensionMatrix::getSize(); ++i)
    {
        for (int j = 0; j < (int) TwoDimensionMatrix::getSize(); ++j)
        {
            os << source[i][j] << ' ';
        }
        os << std::endl;
    }
    return os;
}


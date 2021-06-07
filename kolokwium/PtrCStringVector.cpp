#include <functional>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdexcept>
#include "PtrCStringVector.h"
#include <cassert>

using namespace std;


PtrCStringVector::PtrCStringVector() : size_(0), capacity_(0), data_(nullptr)
{
}

PtrCStringVector::PtrCStringVector(const PtrCStringVector &srcPtrCStringVector) : size_(0), capacity_(0), data_(nullptr)
{
    this->copy(srcPtrCStringVector);
}

PtrCStringVector::~PtrCStringVector()
{
    this->free();
}

PtrCStringVector &PtrCStringVector::operator=(const PtrCStringVector &source)
{
    if (&source != this)
    {
        this->copy(source);
    }

    return *this;
}

PtrCStringVector &PtrCStringVector::operator=(PtrCStringVector &&source)
{
    if (this != &source)
    {
        this->move(source);
    }

    return *this;
}

void PtrCStringVector::push_back(const char *text2Add)
{
    if (capacity_ <= size_)
    {
        this->reserve((10 < this->size_ * 2) ? this->size_ * 2 : 10);
    }

    auto len = strlen(text2Add);
    this->data_[size_] = new char[len + 1]();

    strcpy(this->data_[size_], text2Add);
    this->size_++;
}

PtrCStringVector PtrCStringVector::operator+(const PtrCStringVector &anotherVector) const
{
    auto tmp = PtrCStringVector();
    auto sourceContainers = {*this, anotherVector};
    for (auto &container: sourceContainers)
    {
        for (int i = 0; i < container.size_; i++)
        {
            tmp.push_back(container.data_[i]);
        }
    }

    return tmp;
}

char *PtrCStringVector::operator[](size_t index)
{
    if (index >= size_)
    {
        throw std::out_of_range("index larger than size");
    }
    return data_[index];
}

const char *PtrCStringVector::operator[](size_t index) const noexcept
{
    if (index >= size_)
    {
        return "";
    }

    return data_[index];
}

PtrCStringVector PtrCStringVector::operator&(const PtrCStringVector &rhs) const
{
    auto tmp = PtrCStringVector();

    auto min_size = this->size_ > rhs.size_ ? rhs.size_ : this->size_;

    for (int i = 0; i < min_size; ++i)
    {
        auto len = strlen(this->data_[i]) + strlen(rhs.data_[i]);
        auto str = new char[len + 1]();
        strcpy(str, this->data_[i]);
        strcat(str, rhs.data_[i]);

        tmp.push_back(str);
        delete[] str;
        str = nullptr;
    }

    if (this->size_ > min_size)
    {
        for (auto i = min_size; i < this->size_; i++)
        {
            tmp.push_back(this->data_[i]);
        }
    }

    if (rhs.size_ > min_size)
    {
        for (auto i = min_size; i < rhs.size_; i++)
        {
            tmp.push_back(rhs.data_[i]);
        }
    }

    return tmp;
}

void PtrCStringVector::free()
{
    if (this->data_ != nullptr)
    {
        for (int i = 0; i < this->size_; i++)
        {
            delete[] this->data_[i];
            this->data_[i] = nullptr;
        }

        delete[] this->data_;
        this->data_ = nullptr;
    }

    this->size_ = 0;
    this->capacity_ = 0;
}

void PtrCStringVector::copy(const PtrCStringVector &other)
{
    this->free();
    this->reserve(other.capacity_);

    for (int i = 0; i < other.size_; i++)
    {
        this->push_back(other.data_[i]);
    }
}

void PtrCStringVector::move(PtrCStringVector &other)
{
    this->free();

    this->data_ = other.data_;
    this->capacity_ = other.capacity_;
    this->size_ = other.size_;

    other.data_ = nullptr;
    other.free();
}

void PtrCStringVector::reserve(size_t new_capacity)
{
    if (this->data_ == nullptr)
    {
        auto initial_capacity = new_capacity;
        this->data_ = new char *[initial_capacity]();
        this->capacity_ = initial_capacity;
        return;
    }

    if (new_capacity > this->capacity_)
    {
        char **tmp = new char *[new_capacity]();
        for (int i = 0; i < this->size_; i++)
        {
            tmp[i] = this->data_[i];
        }
        delete[] this->data_;
        this->data_ = tmp;
        this->capacity_ = new_capacity;
    }
}

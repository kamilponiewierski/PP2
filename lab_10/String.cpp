
#include <cstring>
#include <algorithm>
#include <iostream>
#include "String.h"

String::String(const char *text) : size(text != nullptr ? (int) strlen(text) : 0),
                                   text(text != nullptr ? new char[strlen(text) + 1]{} : nullptr)
{
    if (text == nullptr)
    {
        throw std::invalid_argument("Text should not be null");
    }

    std::copy(text, text + size, this->text);
}

String::String() : size(0), text(new char[0]{})
{

}

String::~String()
{
    delete[] this->text;
    this->text = nullptr;
}

char *String::getText() const
{
    if (text == nullptr)
    {
        throw std::exception();
    }
    return text;
}

String &String::operator=(const String &other)
{
    if (&other == this)
    {
        return *this;
    }

    replaceText(other.text);

    return *this;
}

void String::replaceText(const char *newText)
{
    delete[] text;
    text = nullptr;

    size = (int) strlen(newText);
    text = new char[size + 1]{};
    std::copy(newText, newText + strlen(newText), text);
}

String &String::operator+=(const char *text2Append)
{
    auto tmp = new char[this->size + strlen(text2Append) + 1];
    std::copy_n(this->text, this->size, tmp);

    delete[] this->text;
    this->text = tmp;

    std::copy_n(text2Append, strlen(text2Append), this->text + this->size);
    this->size = strlen(this->text);
    return *this;
}

String::String(const String &other) : size(other.size),
                                      text(new char[other.size + 1]{})
{
    if (other.text == nullptr)
    {
        throw std::exception();
    }
    std::copy(other.text, other.text + other.size, this->text);
    this->size = other.size;
}

int String::getSize() const
{
    return size;
}

String &String::operator+(const char *text2Append)
{
    auto s = new String(this->text);
    *s += text2Append;
    return *s;
}

String &String::operator=(const char *newText)
{
    if (newText == nullptr)
    {
        throw std::exception();
    }

    this->replaceText(newText);
    return *this;
}


std::ostream &operator<<(std::ostream &os, const String &string)
{
    os << string.getText() << " " << string.getSize() << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, const String &string)
{
    is >> string.getText();
    return is;
}
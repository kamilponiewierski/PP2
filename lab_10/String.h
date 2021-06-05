
#ifndef LAB_10_STRING_H
#define LAB_10_STRING_H


class String
{
private:
    char *text;
    int size;

public:
    String();

    explicit String(const char *text);

    String(const String &other);

    ~String();

    [[nodiscard]] char *getText() const;

    [[nodiscard]] int getSize() const;

    String &operator=(const String &other);

    String &operator=(const char *newText);

    String &operator+(const char *text2Append);

    String &operator+=(const char *text2Append);

    void replaceText(const char *newText);
};

std::ostream &operator<<(std::ostream &os, const String &string);

std::istream &operator>>(std::istream &is, const String &string);


#endif //LAB_10_STRING_H

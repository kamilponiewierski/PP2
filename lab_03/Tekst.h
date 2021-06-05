
#ifndef PP2_TEKST_H
#define PP2_TEKST_H


class Tekst
{
private:
    char *String;
    int size;

public:
    void setNewText(const char *newText);

    int getSize() const;

    char *getString() const;

    Tekst();

    explicit Tekst(const char *tekst);

    Tekst(const Tekst &tekst);

    ~Tekst();
};


#endif //PP2_TEKST_H

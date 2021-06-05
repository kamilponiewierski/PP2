
#include <iostream>
#include <vector>

void print(int a)
{
    std::cout << a << std::endl;
}

void print(double a)
{
    std::cout << a << std::endl;
}

void print(const char *c = "42")
{
    int i = 0;
    while (*(c + i) != '\0')
    {
        std::cout << *(c + i);
        i++;
    }
    std::cout << std::endl;
}

struct Ulamek
{
    int numerator;
    int denominator;
};

void print(Ulamek u)
{
    std::cout << u.numerator << '/' << u.denominator << std::endl;
}

void printReference(Ulamek &u)
{
    std::cout << u.numerator << '/' << u.denominator << std::endl;
}


void print(int arr[], int n)
{
    std::cout << '[';
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        if (i < n - 1)
        {
            std::cout << ", ";
        } else
        {
            std::cout << ']' << std::endl;
        }
    }
}

void print(int (&arr)[])
{
    std::cout << arr[1];
}

int *doubleCopy(int *begin, int *end)
{
    if (begin == nullptr || end == nullptr) return nullptr;

    int size = end - begin;

    int *copy = new int[size];

    for (int i = 0; i < size; ++i)
    {
        copy[i] = *(begin + i) * 2;
    }

    return copy;
}

void getDsToUpper(std::string &s)
{
    for (auto &c: s)
    {
        if (c == 'd')
            c = 'D';
    }
}

void zadanie1()
{
    std::cout << "\nZADANIE 1\n";
    print(42);

    print(3.1415);

    Ulamek u = Ulamek();
    u.numerator = 3;
    u.denominator = 5;
    print(u);
    printReference(u);

    const char *cp = "Hello";
    print(cp);

    int foo[4] = {3, 1, 2, 3};
    print(foo, 4);
}

void zadanie2()
{
    std::cout << "\nZADANIE 2\n";
    int arr[] = {123, 12, 12, 1, 32, 1};
    int *arrCopy = doubleCopy(&arr[0], &arr[3]);

    print(arrCopy, 3);
    delete[] arrCopy;
}

void zadanie3()
{
    std::cout << "\nZADANIE 3\n";
    std::string s = std::string("dddasdfsadddDD");
    getDsToUpper(s);
    std::cout << s << std::endl;
}

void zadanie4()
{
    std::cout << "\nZADANIE 4\n";
    std::vector<int> v = std::vector<int>();
    v.push_back(4);
    v.push_back(12);
    v.push_back(12321);
    v.push_back(42);

    for (int i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void zadania()
{
    zadanie1();

    zadanie2();

    zadanie3();

    zadanie4();
}
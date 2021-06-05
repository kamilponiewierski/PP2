#include <iostream>
#include "String.h"

int main()
{
    String a = String();
    String b = String("asdf");
    try
    {
        String bNull = String(nullptr);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Probowano utworzyc String z textem rownym null" << std::endl;
    }

    String s2;
    s2 = String("a");

    String s3;
    s3 = String("text3");

    s3 += "b";

    b = b;

    s3 = s2 = b;

    String s4 = String("czwarty string");

    String f;
    f = String("przed podmiana");
    f = "po podmianie";

    String i = String("czesc 1");
    i += " i czesc 2";

    String j = s4 + " i piaty";


    for (const String &s : {a, b, s2, s3, s4, f, i, j})
    {
        std::cout << s;
    }

    std::cout << "Koniec\n";

}

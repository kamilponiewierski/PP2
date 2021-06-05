
#include <string>
#include <iostream>
#include "ConsoleLogger.h"


void ConsoleLogger::log(std::string text)
{
    std::cout << getCurrentTimeInTextForm() << " " << text << std::endl;
}

Logger *ConsoleLogger::instance()
{
    static ConsoleLogger logger;
    return &logger;
}

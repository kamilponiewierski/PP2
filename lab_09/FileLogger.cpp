
#include <iostream>
#include <fstream>
#include "FileLogger.h"

void FileLogger::log(std::string text)
{
    std::fstream file;
    const char *fileName = "log.txt";
    file.open(fileName, std::fstream::app);
    if (!file)
    {
        throw std::invalid_argument("Can't open file for writing!");
    }
    file << getCurrentTimeInTextForm() << ": " << text << std::endl;

}

Logger *FileLogger::instance()
{
    static FileLogger fileLogger;

    return &fileLogger;
}

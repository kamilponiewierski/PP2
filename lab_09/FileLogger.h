
#ifndef LAB_09_FILELOGGER_H
#define LAB_09_FILELOGGER_H


#include "Logger.h"

class FileLogger : public Logger
{
public:
    static Logger *instance();

    void log(std::string text) override;

private:
    FileLogger() = default;

};


#endif //LAB_09_FILELOGGER_H

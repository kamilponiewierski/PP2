
#ifndef LAB_09_CONSOLELOGGER_H
#define LAB_09_CONSOLELOGGER_H


#include "Logger.h"

class ConsoleLogger : public Logger
{
private:
    ConsoleLogger() = default;
public:
    void log(std::string text) override;
    static Logger * instance();

};


#endif //LAB_09_CONSOLELOGGER_H

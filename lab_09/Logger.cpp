
#include "Logger.h"

Logger *Logger::instance()
{
    return currentLogger;
}

void Logger::registerInstance(const std::string& text, Logger *logger)
{
    loggers.emplace_back(text, logger);

}

std::string Logger::getCurrentTimeInTextForm()
{
    time_t now = time(nullptr);
    char buffer[100] = {};
    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", gmtime(&now));
    return std::string(buffer);
}

void Logger::setInstanceByName(const std::string& name)
{
    for (auto[lName, logger] : loggers)
    {
        if (lName == name)
        {
            currentLogger = logger;
            return;
        }
    }

    throw std::exception();
}




#include <thread>
#include "Logger.h"
#include "ConsoleLogger.h"
#include "FileLogger.h"
#include "DatabaseLogger.h"

int main(int argc, char *argv[])
{
    const char *consoleName = "ConsoleLogger";
    const char *fileName = "FileLogger";
    const char *dbLogger = "DatabaseLogger";
    Logger::registerInstance(consoleName, ConsoleLogger::instance());
    Logger::registerInstance(fileName, FileLogger::instance());
    Logger::registerInstance(dbLogger, DatabaseLogger::instance());
    // ... i inne loggery
    if (argc > 1)
    {
        Logger::setInstanceByName(argv[1]);
    } else
    {
        Logger::setInstanceByName(consoleName);
    }
    Logger::instance()->log("Meldujemy wykonanie zadania!");


    std::string loggers[3] = {consoleName, fileName, dbLogger};

    for (const auto &loggerName : loggers)
    {
        Logger::setInstanceByName(loggerName);

        for (int i = 0; i < 10; i++)
        {
            Logger::instance()->log(
                    "Logger test (" + loggerName + ") " + std::to_string(i));
        }
    }
}

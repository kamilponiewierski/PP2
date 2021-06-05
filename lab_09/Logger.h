
#ifndef LAB_09_LOGGER_H
#define LAB_09_LOGGER_H


#include <string>
#include "vector"

class Logger
{
public:
    virtual void log(std::string text) = 0;

    static Logger *instance();

    static void registerInstance(const std::string& text, Logger *logger);

    static std::string getCurrentTimeInTextForm();

    static void setInstanceByName(const std::string& name);

private:
    static inline Logger *currentLogger;
    static inline std::vector<std::pair<std::string, Logger *>> loggers;
};


#endif //LAB_09_LOGGER_H

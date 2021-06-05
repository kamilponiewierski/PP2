
#ifndef LAB_09_DATABASELOGGER_H
#define LAB_09_DATABASELOGGER_H


#include "Logger.h"
#include <sqlite3.h>

class DatabaseLogger : public Logger
{
    DatabaseLogger() = default;

public:
    void log(std::string text) override;

    static Logger *instance();

private:
    static void executeSqlStatement(const char *sql, sqlite3 *db);

};


#endif //LAB_09_DATABASELOGGER_H

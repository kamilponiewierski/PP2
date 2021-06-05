
#include <stdexcept>
#include <iostream>
#include "DatabaseLogger.h"


Logger *DatabaseLogger::instance()
{
    static DatabaseLogger logger;

    return &logger;
}

void DatabaseLogger::log(std::string text)
{
    char const *databaseFile = "db.db";
    sqlite3 *db;

    if (sqlite3_open(databaseFile, &db))
    {
        throw std::invalid_argument("Can't open database file !: ");
    }

    std::string sqlQuery = "CREATE TABLE IF NOT EXISTS Log("  \
                      "LoggingTime    TEXT    NOT NULL," \
                      "Message        TEXT    NOT NULL);";
    executeSqlStatement(sqlQuery.c_str(), db);

    sqlQuery = "INSERT INTO Log (LoggingTime, Message) VALUES (\""
               + getCurrentTimeInTextForm() + "\", \"" + text + "\")";
    executeSqlStatement(sqlQuery.c_str(), db);

    sqlite3_close(db);
}

void DatabaseLogger::executeSqlStatement(const char *sql, sqlite3 *db)
{
    char *zErrMsg = nullptr;
    if (sqlite3_exec(db, sql, nullptr, nullptr, &zErrMsg) != SQLITE_OK)
    {
        std::cerr << "SQL error: " << zErrMsg << std::endl;
        sqlite3_free(zErrMsg);
    }
}

cmake_minimum_required(VERSION 3.19)
project(lab_09)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_09 main.cpp Logger.cpp Logger.h FileLogger.cpp FileLogger.h ConsoleLogger.cpp ConsoleLogger.h DatabaseLogger.cpp DatabaseLogger.h)
target_link_libraries(lab_09 LINK_PUBLIC sqlite3)
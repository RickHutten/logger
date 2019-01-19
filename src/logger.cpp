#include <chrono>
#include <fstream>
#include <iostream>

#include "logger/logger.hpp"

Logger::Logger(const char* fileName) {
    this->fileName = fileName;

    std::ofstream file (fileName, std::ios::out);
    if (file.is_open())
    {
        file << "event number, value, time" << std::endl;
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
}

long Logger::getCurrentTime()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
}

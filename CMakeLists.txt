cmake_minimum_required(VERSION 2.8.9)
project (logger)

include_directories(include)

add_executable(test src/test.cpp src/logger.cpp)

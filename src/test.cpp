#include "logger/logger.hpp"
#include "gtest/gtest.h"
#include <iostream>
#include <fstream>

std::string readFile(int lineNumber) {
    std::string line;
    std::ifstream file("log_test.txt");
    int lineCount = 0;
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            if (lineCount == lineNumber) {
                file.close();
                return line;
            }
        }
        file.close();
    }
    return "";
}

//TEST(NumberTest, IntegerTest) {
//    Logger logger("log_test.txt");
//    logger.log(10);
//    logger.log(12354352123);
//    logger.log(0);
//    logger.log(-16);
//    logger.log(-13587651);
//
//    EXPECT_EQ ("1, 10, ", readFile(1).substr(0, 7));
//}

int main(int argc, char *argv[])
{
    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
}

#include <iostream>
#include <fstream>

class Logger
{
public:
    Logger(const char*);

    template<class T>
    void log(T value)
    {
        std::ofstream file(fileName, std::ios::out | std::ios::app);
        if (file.is_open())
        {
            file << count << ", ";
            count++;

            if (typeid(value) == typeid(bool))
            {
                value ? file << "True" : file << "False";
            }
            else
            {
                file << value;
            }

            file << ", " << std::fixed << getCurrentTime() << std::endl;
            file.close();
        }
        else
        {
            std::cout << "Unable to open file" << std::endl;
        }
    }

private:
    int count = 1;
    long getCurrentTime();
    const char* fileName;
};
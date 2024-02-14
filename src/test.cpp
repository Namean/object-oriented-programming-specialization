#include <iostream>

// g++ --std=c++11 test.cpp test2.cpp

void printHello();
float average(float x, float y);

int main()
{
    printHello();
    float z = average(15, 7.5);
    std::cout << z << std::endl;

    return 0;
}

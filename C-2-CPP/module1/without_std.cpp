#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;

    int x = 100;
    char y = 'A';
    float z = 3.14f;
    double w = 2.71828;
    bool isTrue = true;

    // there is no need format specifiers like %d, %c, %f, etc. in C++ for input/output
    std::cout << "Integer: " << x << std::endl;
    std::cout << "Character: " << y << std::endl;
    std::cout << "Float: " << z << std::endl;
    std::cout << "Double: " << w << std::endl;
    std::cout << "Boolean: " << std::boolalpha << isTrue << std::endl;

    return 0;
}
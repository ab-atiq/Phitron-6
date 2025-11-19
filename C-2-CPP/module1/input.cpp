#include <iostream>

int main()
{
    int x;
    char y;
    float z;
    std::cin >> x >> y >> z;
    std::cout << "Integer: " << x << std::endl;
    std::cout << "Character: " << y << std::endl;
    std::cout << "Float: " << z << std::endl;

    // char to ascii value in c
    char ch = 'A';
    printf("Character: %c, ASCII value: %d\n", ch, ch);
    std::cout << "Character: " << ch << ", ASCII value: " << (int)ch << std::endl;

    return 0;
}

/*
input:
14 a 23.33

Output:
Integer: 14
Character: a
Float: 23.33

input:
14
a
23.33
Output:
Integer: 14
Character: a
Float: 23.33
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 10;
    float num2 = 5.5;

    // 64-bit integer
    long long int num4 = 12345678901234;
    // Double precision floating point
    double num3 = 15.99;

    char letter = 'A';
    bool isTrue = true;

    printf("Integer: %d\n", num1);
    printf("Float: %.2f\n", num2);

    printf("Long Long Integer: %lld\n", num4);
    printf("Double: %.2lf\n", num3);
    
    printf("Character: %c\n", letter);
    printf("Boolean: %d\n", isTrue);

    return 0;
}
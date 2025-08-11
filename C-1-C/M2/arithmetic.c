#include <stdio.h>

int main()
{

    int a = 5, b = 10;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    int sub = a - b;
    printf("Difference: %d\n", sub);
    int mul = a * b;
    printf("Product: %d\n", mul);
    // int div = a / b;
    // printf("Quotient: %d\n", div);
    float div = (float)a / b;
    printf("Quotient: %.2f\n", div);

    int remainder = a % b;
    printf("Modulus: %d\n", remainder);

    return 0;
}
#include <stdio.h>

// 1. No Return, No Parameter

void checkEvenOdd1()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

// 2. With Return, No Parameter

int checkEvenOdd2()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

// 3. With Parameter, No Return

void checkEvenOdd3(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

// 4. With Parameter, With Return

int checkEvenOdd4(int n)
{
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

int main()
{

    // 1. No Return, No Parameter

    checkEvenOdd1();

    // 2. With Return, No Parameter

    int result2 = checkEvenOdd2();
    if (result2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    // 3. With Parameter, No Return
    int n3;
    scanf("%d", &n3);
    checkEvenOdd3(n3);

    // 4. With Parameter, With Return

    int n4;
    scanf("%d", &n4);
    int result4 = checkEvenOdd4(6);
    if (result4 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
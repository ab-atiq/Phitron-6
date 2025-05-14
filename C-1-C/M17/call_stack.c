#include <stdio.h>

void mello()
{
    printf("Mello Function\n");
}

void gello()
{
    printf("Gello Function\n");
    mello();
}

void hello()
{
    printf("Hello Function\n");
    gello();
}

int main()
{
    printf("Main Function\n");
    hello();

    return 0;
}
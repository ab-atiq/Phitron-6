#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if (m >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (m >= 500)
    {
        printf("One Large Pizza");
    }
    // else if (m >= 250)
    else if (m < 500 && m >= 250)
    {
        printf("Three Small Burger");
    }
    else if (m >= 100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first_digit = n / 1000;
    // printf("%d", first_digit);
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
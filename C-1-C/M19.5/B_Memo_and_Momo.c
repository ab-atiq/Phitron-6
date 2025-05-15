#include <stdio.h>
int main()
{
    long long int a, b, k;               // Use long long int for large values
    scanf("%lld %lld %lld", &a, &b, &k); // Correct format specifier

    if (a % k != 0 && b % k != 0)
    {
        printf("No One\n");
    }
    else if (a % k == 0 && b % k == 0)
    {
        printf("Both\n");
    }
    else if (a % k == 0)
    {
        printf("Memo\n");
    }
    else if (b % k == 0)
    {
        printf("Momo\n");
    }

    return 0; // Good practice to return from main
}
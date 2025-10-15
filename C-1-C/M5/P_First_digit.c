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

/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>
int main()
{
    int x;
    scanf("%1d", &x); // first digit input from number
    // printf("%d", x);
    if (x % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}
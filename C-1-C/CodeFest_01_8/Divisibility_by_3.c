/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-08/challenges/divisibility-by-3-2-1

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    // getchar();
    char str[n + 1];
    scanf(" %s", str);
    int digit_sum = 0, len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        digit_sum += str[i] - '0';
    }
    // printf("%d\n", digit_sum); // all digit sum print

    if (digit_sum % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
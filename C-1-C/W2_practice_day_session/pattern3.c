/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", i + 'A' - 1);
        }
        printf("\n");
    }
    // printf("%d\n", 'A');
    // printf("%c\n", 'A');
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 64 + i); // i start from 1. so, sum with 64
        }
        printf("\n");
    }
    return 0;
}
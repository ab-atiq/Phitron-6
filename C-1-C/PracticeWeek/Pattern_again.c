#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    for (int i = n - 1; i >= 1; i--)
    {
        // space print - (n-i) times space print
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // remaining number print - (1 to i times)
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
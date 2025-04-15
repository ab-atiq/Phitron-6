#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("%d ", n);
        }
        while (n > 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}
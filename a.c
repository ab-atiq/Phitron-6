#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 8; i <= n; i += 8)
    {
        printf("%d\n", i);
    }

    return 0;
}
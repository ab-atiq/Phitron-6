#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            printf("%d", i);
            // break;
            return 0;
        }
        // else
        // {
        //     printf("-1");
        // }
    }

    printf("-1");
    return 0;
}
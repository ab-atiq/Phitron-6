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

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", a[i], a[j]); // all pair check
            if (a[i] + a[j] == x)
            {
                flag = 1;
                printf("%d %d\n", a[i], a[j]); // matched pair
                printf("YES\n");
            }
        }
    }

    if (flag == 0)
    {
        printf("NO\n");
    }

    return 0;
}

/*
input:
4
5 3 2 6
9
output:
3 6
YES

input:
4
5 3 2 6
90
output:
NO
*/
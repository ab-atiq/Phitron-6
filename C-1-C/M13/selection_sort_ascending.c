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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", a[i], a[j]); // all pair check
            // if (a[i] < a[j])
            // {
            //     // printf("%d %d\n", a[i], a[j]); // matched condition pair
            //     // accending okay
            // }
            // else
            // {
            //     // accending not okay
            //     int tmp = a[i];
            //     a[i] = a[j];
            //     a[j] = tmp;
            // }
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
input:
4
5 3 2 6

output:
2 3 5 6

*/
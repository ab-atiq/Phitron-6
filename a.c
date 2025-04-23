#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0)
    {
        int a[n];
        // input for loop
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        // for max
        int max = a[0];
        int min = a[0];
        for (int i = 0; i < n; i++)
        {

            if (max < a[i])
            {
                max = a[i];
            }
            if (min > a[i])
            {
                min = a[i];
            }
        }
        // check max and min
        // printf("%d %d\n", max, min);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == max)
            {
                a[i] = min;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == min)
            {
                a[i] = max;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
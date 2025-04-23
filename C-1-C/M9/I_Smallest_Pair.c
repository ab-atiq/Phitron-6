/*
#include <stdio.h>
#include <limits.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // method 1: find possible smallest result
        int small_sum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cal = arr[i] + arr[j] + (j + 1) - (i + 1); // 1 index based
                if (cal < small_sum)
                {
                    small_sum = cal;
                }
            }
        }
        printf("%d\n", small_sum);
    }

    return 0;
}
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);

        // full work with 1 index based 
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // method 2: find possible smallest result 1 - N
        int small_sum = INT_MAX;
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int cal = arr[i] + arr[j] + j - i; 
                if (cal < small_sum)
                {
                    small_sum = cal;
                }
            }
        }
        printf("%d\n", small_sum);
    }

    return 0;
}

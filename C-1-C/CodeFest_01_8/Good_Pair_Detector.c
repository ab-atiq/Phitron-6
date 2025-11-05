/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-08/challenges/good-pair-detector

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int even_cnt = 0, odd_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_cnt++;
        }
        else
        {
            odd_cnt++;
        }
    }
    // solution - 1
    // printf("%d", even_cnt * odd_cnt); // multiplication of even and odd count

    // solution - 2 - not accepted
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] % 2 == 0 && (arr[j] % 2 == 1 || arr[j] % 2 == -1))
                {
                    // even and positive or negative odd
                    cnt++;
                }
                else if ((arr[i] % 2 == 1 || arr[i] % 2 == -1) && arr[j] % 2 == 0)
                {
                    // positive or negative odd and even
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt / 2);

    // solution - 3
    // int cnt = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if ((arr[i] % 2 == 0) && arr[j] % 2 == 1)
    //         { // even and odd
    //             cnt++;
    //             // printf("%d %d\n", arr[i], arr[j]);
    //         }
    //         else if (arr[i] % 2 == 1 && (arr[j] % 2 == 0))
    //         {
    //             // odd and even
    //             cnt++;
    //             // printf("%d %d\n", arr[i], arr[j]);
    //         }
    //         else if (arr[i] % 2 == 0 && arr[j] % 2 == -1)
    //         {
    //             // even and negative odd
    //             cnt++;
    //             // printf("%d %d\n", arr[i], arr[j]);
    //         }
    //         else if (arr[i] % 2 == -1 && arr[j] % 2 == 0)
    //         {
    //             // negative odd and even
    //             cnt++;
    //             // printf("%d %d\n", arr[i], arr[j]);
    //         }
    //     }
    // }
    // printf("%d", cnt);

    return 0;
}
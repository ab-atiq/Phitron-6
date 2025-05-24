#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    int i = 0, j = n - 1, cnt_shoot = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] <= k)
        {
            cnt_shoot++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }

    printf("%d\n", cnt_shoot);

    return 0;
}
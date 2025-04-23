#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // min and max value find with index
    int min = 1e5 + 1, max = -1e5 - 1, min_idx, max_idx;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
    }

    // min and max index value swap
    arr[min_idx] = max;
    arr[max_idx] = min;
    
    // array print
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

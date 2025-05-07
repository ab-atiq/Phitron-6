#include <stdio.h>

void find_min_max(int arr[], int size, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max; // min and max value update using function
    find_min_max(arr, n, &min, &max);
    
    printf("%d %d\n", min, max);

    return 0;
}
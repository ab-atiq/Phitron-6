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

    // max array element find
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", max - arr[i]); // max - arr[i] always positive or 0. So, we does not need absolute use.
    }

    return 0;
}
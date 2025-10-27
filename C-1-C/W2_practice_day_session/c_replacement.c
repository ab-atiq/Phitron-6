/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: 

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
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            // printf("%d ", 1);
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            // printf("%d ", 2);
            arr[i] = 2;
        }
        else
        {
            // printf("%d ", arr[i]);
            arr[i] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
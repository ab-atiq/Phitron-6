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

    for (int i = n - 1; i >= 0; i--)
    {
        // if (i % 2 == 1) // odd
        if (i % 2 == 0) // even
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

/*
input: 
6
10 20 30 40 50 60
output:
50 30 10 indexes 4 2 0
*/
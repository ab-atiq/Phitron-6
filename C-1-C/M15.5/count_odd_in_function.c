#include <stdio.h>

int count_odd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
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

    // print odd count
    printf("%d\n", count_odd(arr, n));
    return 0;
}

/*
5
1 5 4 10 2

output
2

*/
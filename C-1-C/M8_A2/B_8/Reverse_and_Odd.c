#include <stdio.h>
int main()
{
    int arr[100005];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print odd index reverse way
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 1) // decision
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
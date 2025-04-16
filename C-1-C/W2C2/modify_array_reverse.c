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

    int x, v;
    scanf("%d %d", &x, &v);

    arr[x] = v; // update or modify
    for (int i = n - 1; i >= 0; i--) // reverse
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
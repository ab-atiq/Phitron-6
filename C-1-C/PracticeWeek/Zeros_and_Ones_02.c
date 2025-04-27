#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    if (arr[x] == 0)
    {
        arr[x] = 1;
    }
    else
    {
        arr[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
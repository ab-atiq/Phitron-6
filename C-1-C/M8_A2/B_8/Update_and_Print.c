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

    int x_th, val;
    scanf("%d %d", &x_th, &val);
    // printf("%d %d", x_th, val);
    arr[x_th] = val;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    int min_res = (m * n) - sum;
    if (min_res <= k && min_res >= 0)
    {
        printf("%d", min_res);
    }
    else if (min_res < 0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
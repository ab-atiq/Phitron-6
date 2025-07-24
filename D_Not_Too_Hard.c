#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 100 && x <= k)
        {
            sum += x;
        }
    }
    printf("%d", sum);
    return 0;
}
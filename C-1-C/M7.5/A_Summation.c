#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // printf("%lld", abs(sum)); // incorrect for long long calculation
    // printf("%lld", llabs(sum));
    if (sum < 0)
    {
        printf("%lld", -1 * sum);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}
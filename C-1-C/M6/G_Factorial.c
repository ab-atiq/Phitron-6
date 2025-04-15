#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        int n;
        scanf("%d", &n);
        long long int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i; // fact = fact * i; here fact is long long int so (long ling int * int ) = long long int
        }
        printf("%lld\n", fact);
    }

    return 0;
}
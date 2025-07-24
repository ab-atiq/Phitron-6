#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        long long n;
        int k;
        scanf("%lld %d", &n, &k);

        if (n >= k && (n - k) % 2 == 0)
        {
            printf("YES\n");
            for (int i = 0; i < k - 1; i++)
            {
                printf("1 ");
            }
            printf("%lld\n", n - (k - 1));
        }
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0)
        {
            printf("YES\n");
            for (int i = 0; i < k - 1; i++)
            {
                printf("2 ");
            }
            printf("%lld\n", n - 2 * (k - 1));
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

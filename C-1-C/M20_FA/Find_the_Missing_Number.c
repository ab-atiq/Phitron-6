#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int M, A, B, C; // 0 <= M <= 10^18
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        if (M == 0)
        {
            printf("0\n");
            continue;
        }

        long long int product = A * B * C; // 1 <= A, B, C <= 10^6
        if (product == 0 && M != 0)        // if product 0
        {
            printf("-1\n");
        }
        else if (M % product == 0)
        {
            printf("%lld\n", M / product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}

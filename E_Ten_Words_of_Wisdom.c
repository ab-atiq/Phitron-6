#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int max_quality = -1;
        int winner_index = -1;

        for (int i = 1; i <= n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a <= 10 && b > max_quality)
            {
                max_quality = b;
                winner_index = i;
            }
        }

        printf("%d\n", winner_index);
    }

    return 0;
}

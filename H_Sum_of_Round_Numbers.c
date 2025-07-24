#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int round_nums[6];
        int cnt = 0;
        int place = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                round_nums[cnt] = digit * place;
                cnt++;
            }
            n /= 10;
            place *= 10;
        }

        printf("%d\n", cnt);
        for (int i = 0; i < cnt; i++)
        {
            printf("%d ", round_nums[i]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int mx, mn;
        if (x >= y)
            mx = x, mn = y;
        else
            mx = y, mn = x;
        int sum = 0;
        for (int i = mn + 1; i <= mx - 1; i++)
        {
            if (i % 2 == 1)
                sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}

// another solution
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            int sum = 0;
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 == 1)
                    sum += i;
            }
            printf("%d\n", sum);
        }
        else if (y > x)
        {
            int sum = 0;
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                    sum += i;
            }
            printf("%d\n", sum);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
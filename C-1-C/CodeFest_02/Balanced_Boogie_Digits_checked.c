#include <stdio.h>
#include <stdbool.h>

bool is_balanced(int n)
{
    int even_cnt = 0, odd_cnt = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            even_cnt++;
        }
        else
        {
            odd_cnt++;
        }
        n /= 10;
    }
    if (even_cnt == odd_cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    bool flag = 0;
    for (int i = l; i <= r; i++)
    {
        if (is_balanced(i))
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("-1\n");
    }
    return 0;
}
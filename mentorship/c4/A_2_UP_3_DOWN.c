/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// https://atcoder.jp/contests/abc326/tasks/abc326_a

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y) // go down or x is uppoer floor
    {
        int cal = x - y;
        if (cal <= 3)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if (x < y) // go up
    {
        int cal = y - x;
        if (cal <= 2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else // not required
    {
        printf("Yes\n");
    }
    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);

    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum_primary_diagonal = 0, sum_secondary_diagonal = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                sum_primary_diagonal += a[i][j];
            }
            if (i + j == r - 1)
            {
                sum_secondary_diagonal += a[i][j];
            }
        }
    }
    int dif = sum_primary_diagonal - sum_secondary_diagonal;
    if (dif < 0)
    {
        dif *= -1;
    }
    printf("%d", dif);
    return 0;
}

/*
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6

22
*/
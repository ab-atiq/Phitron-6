#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int have_to_zero = r * c;
    int cnt_zero = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                cnt_zero++;
            }
        }
    }
    if (have_to_zero == cnt_zero)
    {
        printf("Zero matrix.");
    }
    else
    {
        printf("Not Zero matrix.");
    }

    return 0;
}

/*
3 1
0
0
0
Zero matrix.


3 2
0 0
0 0
0 0
Zero matrix.


2 3
0 0 0
0 0 0
0 0 0
Zero matrix.
*/
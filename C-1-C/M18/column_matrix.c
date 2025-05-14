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

    if (c == 1)
    {
        printf("Column matrix.");
    }
    else
    {
        printf("Not Column matrix.");
    }

    return 0;
}

/* 
3 1
3
2
4
Column matrix.
*/
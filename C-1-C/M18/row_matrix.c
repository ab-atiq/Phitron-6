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

    if (r == 1)
    {
        printf("Row matrix.");
    }
    else
    {
        printf("Not Row matrix.");
    }

    return 0;
}

/*
3 3
1 2 3
1 4 2
1 4 2
Not Row matrix.


1 3
1 2 3
Row matrix.
*/
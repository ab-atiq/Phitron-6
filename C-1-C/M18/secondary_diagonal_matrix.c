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

    if (r == c) // square matrix
    {
        int is_diagonal = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j != r - 1) // secondary diagonal check
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = 0;
                        printf("Not Secondary Diagonal Matrix");
                    }
                }
            }
        }
        if (is_diagonal == 1)
        {
            printf("Secondary Diagonal Matrix");
        }
    }
    else
    {
        printf("Not Square Matrix");
    }

    return 0;
}

/*
3 3
0 0 2
0 2 0
1 0 0
Secondary Diagonal Matrix


3 3
1 0 1
0 2 0
5 0 0
Not Secondary Diagonal Matrix


3 2
0 3
4 0
0 0
Not Square matrix.

*/
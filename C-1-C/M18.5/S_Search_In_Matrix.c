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

    int x;
    scanf("%d", &x);

    int is_exist = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                is_exist = 1;
            }
        }
    }

    if (is_exist == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}

/*
2 2
1 2
3 4
3
will not take number

2 2
1 2
3 4
10
will take number

*/
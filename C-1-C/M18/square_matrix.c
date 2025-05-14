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

    if (r == c)
    {
        printf("Square matrix.");
    }
    else
    {
        printf("Not Square matrix.");
    }

    return 0;
}

/*  
2 3
1 4 2
1 4 2

output
Not Square matrix.


3 3
1 2 3
1 4 2
1 4 2

output
Square matrix.
*/
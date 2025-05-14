#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int specific_row;
    scanf("%d", &specific_row);

    // for (int i = 0; i < r; i++)
    // {
    for (int j = 0; j < c; j++)
    {
        printf("%d ", arr[specific_row][j]);
    }
    printf("\n");
    // }
    return 0;
}

/*
input
3 3
1 2 3
4 5 6
7 8 9
2

output
7 8 9

input
2 3
10 20 30
40 50 60
0

output
10 20 30

*/
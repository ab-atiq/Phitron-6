#include <stdio.h>
int main()
{
    // int arr[5][6];
    // arr[0][0]=10;
    // arr[0][1]=20;
    // arr[0][2]=30;
    // arr[1][0]=40;
    // arr[1][1]=50;
    // arr[1][2]=60;
    // printf("%d", arr[1][2]);
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    // scanf("%d", &arr[0][0]);
    // scanf("%d", &arr[0][1]);
    // scanf("%d", &arr[0][2]);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // printf("%d", arr[0][0]);
    // printf("%d", arr[0][1]);
    // printf("%d", arr[0][2]);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
input
3 3
1 2 3
4 5 6
7 8 9

output
1 2 3
4 5 6
7 8 9

input
2 3
10 20 30
40 50 60

output
10 20 30
40 50 60
*/
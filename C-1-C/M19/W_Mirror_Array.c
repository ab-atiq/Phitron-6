#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // mirror print
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--) // column reverse
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
input:
3 3
2 3 5
7 9 20
35 1 12

output:
5 3 2
20 9 7
12 1 35


*/
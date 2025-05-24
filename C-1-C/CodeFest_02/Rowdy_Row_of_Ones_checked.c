#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // Read the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int idx = 0, max_1 = 0; // default row will be 0
    for (int i = 0; i < n; i++)
    {
        int cnt_1_in_row = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                cnt_1_in_row++;
            }
        }
        if (cnt_1_in_row > max_1)
        {
            max_1 = cnt_1_in_row;
            idx = i;
        }
    }
    printf("%d\n", idx);
    return 0;
}

/*
5 5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

output: 0
*/
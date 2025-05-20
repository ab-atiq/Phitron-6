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

    int maxOnes = -1; // maxOnes = INT_MIN
    int maxRowIndex = 0;

    for (int i = 0; i < n; i++)
    {
        int onesCount = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                onesCount = m - j; // All remaining are 1s since the row is sorted
                break;
            }
        }

        if (onesCount > maxOnes)
        {
            maxOnes = onesCount;
            maxRowIndex = i;
        }
    }

    printf("%d\n", maxRowIndex);
    return 0;
}

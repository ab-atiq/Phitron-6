#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M); // Read number of rows (N) and columns (M)

    // First check: Matrix must be square (N == M) to be Jadu Matrix
    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[N][M];
    // Read the matrix elements
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check all elements of the matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // Check if current position is on either diagonal
            if (i == j || i + j == N - 1)
            {
                // Diagonal elements must be 1
                if (matrix[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                // Non-diagonal elements must be 0
                if (matrix[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    // If all checks passed, it's a Jadu Matrix
    printf("YES\n");
    return 0;
}
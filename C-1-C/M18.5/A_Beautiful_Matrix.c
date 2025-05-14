#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int row = 0, col = 0; // 0 and 1 index both are correct for this calculation

    // Read the matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) // find the position of '1'
            {
                row = i;
                col = j;
            }
        }
    }

    // Calculate the number of moves needed
    int moves = abs(row - 2) + abs(col - 2); // sum of the absolute differences between the current row and column indices and the target row and column indices
    printf("%d\n", moves);

    return 0;
}
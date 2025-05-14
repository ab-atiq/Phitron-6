#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[6][6];
    // int row = 0, col = 0; // 0 index both are correct for this calculation
    int row = 1, col = 1; // 0 and 1 index both are correct for this calculation

    // Read the matrix.
    // if 0 index then i and j start from 0 and less than 5
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
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
    // int moves = abs(row - 2) + abs(col - 2); // sum of the absolute differences between the current row and column indices and the target row and column indices
    int moves = abs(row - 3) + abs(col - 3); // sum of the absolute differences between the current row and column indices and the target row and column indices
    printf("%d\n", moves);

    return 0;
}
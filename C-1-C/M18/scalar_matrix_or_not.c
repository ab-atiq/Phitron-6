#include <stdio.h>
#include <stdbool.h>
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

    // A scalar matrix must be a square matrix
    if (r != c)
    {
        printf("Not a scalar matrix.");
        return 0;
    }

    // Check if the matrix is a scalar matrix
    bool scalar = true;         // Assume it is a scalar matrix
    int diagonal = arr[0][0];   // Get the value of the diagonal element
    for (int i = 0; i < r; i++) // also work from i=1
    {
        for (int j = 0; j < c; j++) // also work from j=1
        {
            if (i == j) // Diagonal elements
            {
                if (arr[i][j] != diagonal)
                {
                    scalar = false;
                    break;
                }
            }
            else if (arr[i][j] != 0) // Non-diagonal elements
            {
                scalar = false;
                break;
            }
        }
        if (!scalar)
            break;
    }

    if (scalar)
    {
        printf("Scalar matrix.");
    }
    else
    {
        printf("Not a scalar matrix.");
    }

    return 0;
}

/*
input:
3 3
5 0 0
0 5 0
0 0 5
output:
Scalar matrix.


input:
3 3
5 0 0
0 4 0
0 0 5
output:
Not a scalar matrix.

input:
2 3
2 0 0
0 2 0
output:
Not a scalar matrix.
*/
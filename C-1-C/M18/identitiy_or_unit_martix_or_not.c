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
        printf("Not a Unit matrix.");
        return 0;
    }

    // Check if the matrix is a unit matrix
    bool unit_chk = true; // Assume it is a unit matrix
    int diagonal = 1;     // Unit value for unit matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j) // Diagonal elements
            {
                if (arr[i][j] != diagonal)
                {
                    unit_chk = false;
                    break;
                }
            }
            else if (arr[i][j] != 0) // Non-diagonal elements
            {
                unit_chk = false;
                break;
            }
        }
        if (!unit_chk)
            break;
    }

    if (unit_chk)
    {
        printf("Unit matrix.");
    }
    else
    {
        printf("Not a unit matrix.");
    }

    return 0;
}

/* 
input:
3 3
1 0 0
0 1 0
0 0 1
output:
Unit matrix.

input:
3 3
1 0 0
0 0 0
0 0 1
output:
Not a unit matrix.

input:
3 2
1 0
0 1
0 0
output:
Not a unit matrix.
*/
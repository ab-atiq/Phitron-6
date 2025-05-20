#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int freq[n]; // Frequency array to store count of 1s per row

    // Read the matrix and fill frequency array
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0; // initialize frequency
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }

        // duplicate parent loop reduce
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                freq[i] = m - j; // count 1s from the first 1 to end
                break;
            }
        }
    }

    // Find the row with the maximum number of 1s
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (freq[i] > freq[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("%d\n", maxIndex);
    return 0;
}
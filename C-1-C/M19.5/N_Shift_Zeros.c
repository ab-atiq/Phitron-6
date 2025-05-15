#include <stdio.h>

void shiftZeros(int A[], int N)
{
    int index = 0; // track the index for non-zero elements

    // Step 1: Move all non-zero elements to the beginning
    for (int i = 0; i < N; i++)
    {
        if (A[i] != 0)
        {
            A[index++] = A[i];
        }
    }

    // Step 2: Fill the remaining positions with 0
    while (index < N)
    {
        A[index++] = 0;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    shiftZeros(A, N);

    // Print the final array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

/*
array A and size N. copy of this array named B in ascending order. make another array C, where each index i (0 <= i < N) of array C is the multiplication between array A[i] and B[i].

N = 5
A = 5 3 1 2 4
B = 1 2 3 4 5
C = 5 6 3 8 20
*/

#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{

    int N;
    scanf("%d", &N); // Read size of array

    int A[N], B[N], C[N];

    // Read array A and make copy into B
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        B[i] = A[i];
    }

    // Sort array B using selection sort
    selection_sort(B, N);

    // Create array C where C[i] = A[i] * B[i]
    for (int i = 0; i < N; i++)
    {
        C[i] = A[i] * B[i];
    }

    // Print array A
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Print array B
    for (int i = 0; i < N; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Print array C
    for (int i = 0; i < N; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
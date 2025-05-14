#include <stdio.h>
#include <stdlib.h> // For abs() function
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
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--)
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
        // // Print array A and B
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", A[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", B[i]);
        // }
        // printf("\n");

        // Sort array B using selection sort
        selection_sort(B, N);
        // // after sort Print array A and B
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", A[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", B[i]);
        // }
        // printf("\n");

        // Create array C with absolute differences
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}

/* #include <stdio.h>
#include <stdlib.h> // For abs() function

int main()
{
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--)
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
        // // Print array A and B
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", A[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", B[i]);
        // }
        // printf("\n");

        // Sort array B using selection sort
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    // Swap B[i] and B[j]
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // // after sort Print array A and B
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", A[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", B[i]);
        // }
        // printf("\n");

        // Create array C with absolute differences
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
} */
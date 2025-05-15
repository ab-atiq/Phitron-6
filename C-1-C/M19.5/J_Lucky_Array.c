#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Find the minimum element in the array
    int min_element = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] < min_element)
        {
            min_element = A[i]; // -10^5 to 10^5. Frequency array is not possible.
        }
    }

    // Count the frequency of the minimum element
    int frequency = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == min_element)
        {
            frequency++;
        }
    }

    // Determine if the frequency is odd or even
    if (frequency % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
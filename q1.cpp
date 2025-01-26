#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);

    int A[N + 1];

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }

    int K;
    scanf("%d", &K);

    // toogle the value of A[temp]
    if (A[K] == 0)
    {
        A[K] = 1;
    }
    else if (A[K] == 1)
    {
        A[K] = 0;
    }

    for (int i = 1; i <= N; i++)
    {
        printf("%d", A[i]);
    }

    return 0;
}
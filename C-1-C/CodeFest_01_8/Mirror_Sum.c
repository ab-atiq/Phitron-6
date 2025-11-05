/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-08/challenges/mirror-sum

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int A[n], B[n], Res[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    // sum A[i] + B[n-1-i]
    for (int i = 0; i < n; i++)
    {
        Res[i] = A[i] + B[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", Res[i]);
    }

    return 0;
}
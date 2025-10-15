#include <stdio.h>
int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A >= C && B >= C)
    {
        printf("%d ", C);
    }
    else if (C >= B && A >= B)
    {
        printf("%d ", B);
    }
    else if (C >= A && B >= A)
    {
        printf("%d ", A);
    }
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (C >= A && C >= B)
    {
        printf("%d", C);
    }
    else if (B >= C && B >= A)
    {
        printf("%d", B);
    }
    return 0;
}
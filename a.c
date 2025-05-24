#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int loga(int N, int i)
{
    int po = pow(2, i);
    if (po == N)
    {
        return i;
    }
    int po1 = loga(N, i + 1);
    return po1;
}
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("1");
    }
    else
    {
        int i = 0;
        int lo = loga(N, i);
        printf("%d", lo);
    }
    return 0;
}
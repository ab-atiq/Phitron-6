/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A

#include <stdio.h>
int main()
{
    int a, b, d, r;
    // float f;
    double f;
    scanf("%d%d", &a, &b);
    d = a / b;
    r = a % b;
    // f = (float)a / b; // can not convert float properly
    f = (double)a / b;
    printf("%d %d %.10f", d, r, f); // judge will check 5 decimal places. though problem statement take 5 decimal places so we atlest print 6 decimal places.
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d %.6lf", a / b, a % b, (double)a / b);
    return 0;
}
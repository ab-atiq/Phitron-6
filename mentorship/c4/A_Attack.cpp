/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// https://atcoder.jp/contests/abc302/tasks/abc302_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a % b == 0)
    {
        printf("%lld\n", a / b);
    }
    else
    {
        printf("%lld\n", a / b + 1);
    }
    return 0;
}

// Another approach
#include <stdio.h>

int main()
{
    long long int A, B;
    scanf("%lld %lld", &A, &B);

    // floor is - A/B
    // ceil is - (A + B - 1) / B
    // Not correct for ceil - (A+B)/B

    // calculate Ceiling of (A / B)
    long long int attacks = (A + B - 1) / B;
    // long long int attacks = (A + B) / B; // Not correct for ceil

    printf("%lld\n", attacks);
    return 0;
}

// previous solution described below
#include <stdio.h>
int main()
{
    // A - x*B <= 0
    // x * B >= A
    // x >= A / B (x must be integer and greater than or equal to A/B)
    // 5.1 -> 6
    // 5 -> 5
    // 25 + (5-1) / 5 = 5
    // 26 + 4 / 5 = 6
    // 27 + 4 / 5 = 6
    // 28 + 4 / 5 = 6
    // 29 + 4 / 5 = 6
    // 30 + 4 / 5 = 6
    // 31 + 4 / 5 = 7
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long x = (a + b - 1) / b;
    printf("%lld\n", x);
    return 0;
}
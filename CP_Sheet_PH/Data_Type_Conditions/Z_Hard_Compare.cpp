#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // avoids overflow and precision issues.
    // A^B>C^D ⟺ log(A^B)>log(C^D)⟺B⋅log(A)>D⋅log(C)
    // if (pow(a, b) > pow(c, d)) // pow() return float which we can not compare properly because of remove precision point
    if (b * log(a) > d * log(c))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
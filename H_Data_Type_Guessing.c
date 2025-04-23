#include <stdio.h>

int main()
{
    long long n, k, a; // three integers n, k, and a. We read these values as long long to avoid overflow during multiplication.
    scanf("%lld %lld %lld", &n, &k, &a);

    // Floating-Point Check: We check if the product n×k is not perfectly divisible by a. If there is a remainder, the result is a floating-point number, and we print "double".
    //  if (n×k) % a ≠ 0. So, the result must be a double
    if ((n * k) % a != 0)
    {
        printf("double\n");
    }
    else
    {
        long long result = (n * k) / a;
        if (result >= -2147483648 && result <= 2147483647)
        {
            printf("int\n");
        }
        else
        {
            printf("long long\n");
        }
    }

    return 0;
}
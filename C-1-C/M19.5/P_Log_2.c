#include <stdio.h>

/*
The floor of log₂(N) is the number of times you can divide N by 2 before it becomes less than 2.

For example:
    log₂(128) = 7, because 128 → 64 → 32 → 16 → 8 → 4 → 2 → 1 (7 steps)
    log₂(127) = 6, because 127 → 63 → 31 → 15 → 7 → 3 → 1 (6 steps)
    log₂(16) = 4, because 16 → 8 → 4 → 2 → 1 (4 steps)
    log₂(8) = 3, because 8 → 4 → 2 → 1 (3 steps)
    log₂(1) = 0, because it's already ≤ 1
*/
long long log2_function(long long n)
{
    // Base case: if n is less than or equal to 1, return 0
    // This is because log₂(1) = 0 and log₂(0) is undefined.
    if (n <= 1)
        return 0;
    return 1 + log2_function(n / 2); // Recursive call to log2_function with n divided by 2
    // return log2_function(n / 2) + 1; // Recursive call to log2_function with n divided by 2
}

int main()
{
    long long N;
    scanf("%lld", &N);

    printf("%lld\n", log2_function(N));

    return 0;
}

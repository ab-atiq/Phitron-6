#include <stdio.h>

long long int fact(int n)
{
    if (n == 1) // 1 <= n <= 20
    {
        return 1;
    }

    // long long int mul = fact(n-1);
    // return n * mul;

    return n * fact(n - 1); // int * long long int = long long int
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int res = fact(n);
    printf("%lld", res);

    return 0;
}

/*
input:
5

output:
120

input:
20

ouput:
2432902008176640000
*/
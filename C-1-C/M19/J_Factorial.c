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

// method 2 - recursion
#include <stdio.h>
void factorial(int n, long long int *res)
{
    if (n == 1)
    {
        return;
    }

    *res = (*res) * n;
    factorial(n - 1, res);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int res = 1;
    factorial(n, &res);
    printf("%lld", res);

    return 0;
}

// method 3 - recursion
#include <stdio.h>
void factorial(int n, long long int fact)
{
    if (n == 1)
    {
        printf("%lld", fact);
        return;
    }

    fact = fact * n;
    factorial(n - 1, fact);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("1");
    }
    else
    {
        factorial(n, 1);
    }

    return 0;
}
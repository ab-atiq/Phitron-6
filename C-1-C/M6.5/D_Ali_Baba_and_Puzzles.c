#include <stdio.h>
#define ll long long int

int main()
{
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (a * b + c == d || a * b - c == d || a + b * c == d || a + b - c == d || a - b * c == d || a - b + c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

// solution using if-else statements
#include <stdio.h>
#define ll long long int

int main()
{
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (a * b + c == d)
    {
        printf("YES");
    }
    else if (a * b - c == d)
    {
        printf("YES");
    }
    else if (a + b * c == d)
    {
        printf("YES");
    }
    else if (a + b - c == d)
    {
        printf("YES");
    }
    else if (a - b * c == d)
    {
        printf("YES");
    }
    else if (a - b + c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
#include <stdio.h>
#define ll long long

ll log2(ll n, ll res, ll i)
{
    if (res > n)
    {
        return i - 1;
    }
    else
    {
        return log2(n, res * 2, i + 1);
    }
}

int main()
{
    ll n;
    scanf("%lld", &n);
    ll res = 1, i = 0;
    printf("%lld", log2(n, res, i));
}
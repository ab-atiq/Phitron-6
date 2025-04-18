#include <stdio.h>
#define ll long long int
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ll x = ((ll)a * b) - ((ll)c * d);
    printf("Difference = %lld", x);
    return 0;
}
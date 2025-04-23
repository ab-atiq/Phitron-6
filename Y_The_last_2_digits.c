#include <stdio.h>
 
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int mul = a * b * c * d;
    long long int x = mul % 100;

    if(x < 10){
        printf("0%lld", x);
    } else {
        printf("%lld", x);
    }

    return 0;
}
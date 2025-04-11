#include <stdio.h>
int main()
{
    int a;
    long long int b;
    double c;
    char d;
    scanf("%d %ld %lf %c", &a, &b, &c, &d);
    printf("%d\n%ld\n%.2lf\n%c\n", a, b, c, d);
    return 0;
}
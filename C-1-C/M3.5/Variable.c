#include <stdio.h>
int main()
{
    int a;
    long long int b;
    double c;
    char d;
    // scanf("%d %lld %lf %c", &a, &b, &c, &d);
    // printf("%d\n%lld\n%.2lf\n%c\n", a, b, c, d);

    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%lf", &c);
    // getchar(); // To consume the newline character left by previous scanf
    scanf(" %c", &d);
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.2lf\n", c);
    printf("%c\n", d);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int ans = ceil(4.5);
    printf("%d\n", ans);
    ans = floor(4.5);
    printf("%d\n", ans);
    ans = round(4.5);
    printf("%d\n", ans);
    ans = sqrt(16);
    printf("%d\n", ans);
    ans = sqrt(20);
    printf("%d\n", ans);
    float ansF = sqrt(20);
    printf("%lf\n", ansF);
    ans = pow(2, 5);
    printf("%d\n", ans);
    ans = abs(-20);
    printf("%d\n", ans);

    return 0;
}
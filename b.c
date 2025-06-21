#include <stdio.h>
int main()
{
    int a = 6;
    float b = 7.3, c = 6.7;
    printf("%d", a *= b += c);
    return 0;
}
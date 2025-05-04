#include <stdio.h>

void sum(int a, int b)
{
    int ans = a + b;
    // return; // forcefully return from middle position of funtion
    printf("%d", ans);
} // sum function by default return from closing } bracket.

int main()
{
    int a, b;
    a = 50, b = 30;
    // scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}
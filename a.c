#include <stdio.h>

void sum(int *a, int *b)
{
    scanf("%d %d", a, b);
}
int main()
{
    int x,y;
    sum(&x, &y);
    printf("%d %d\n", x, y);
    return 0; 
}
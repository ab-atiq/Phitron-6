/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// https://www.codechef.com/problems/MVR
#include <stdio.h>
int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    int messi = a * 2 + b * 1;
    int ronaldo = x * 2 + y * 1;
    if (messi > ronaldo)
    {
        printf("Messi\n");
    }
    else if (messi < ronaldo)
    {
        printf("Ronaldo\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}
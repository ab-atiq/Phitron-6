#include <stdio.h>

void swap_it(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Before Swap: %d %d\n", x, y);
    swap_it(&x, &y);
    printf("After Swap: %d %d\n", x, y);

    return 0;
}

/*
5 10
Before Swap: 5 10
After Swap: 10 5
*/
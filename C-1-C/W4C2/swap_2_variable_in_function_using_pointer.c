#include <stdio.h>

void swap_it(int *a, int *b) // pointer receives address in parameter
{
    int temp = *a; // dereferencing to get value
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Before Swap: %d %d\n", x, y);
    swap_it(&x, &y); // address passed
    printf("After Swap: %d %d\n", x, y);

    return 0;
}

/*
5 10
Before Swap: 5 10
After Swap: 10 5
*/
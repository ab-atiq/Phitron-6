#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
int n;
void hello(int i)
{
    if (i > n) // end condition
    {
        return;
    }
    hello(i + 1); // increment/decrement
    printf("%d", i);
    if (i != 1)
    {
        printf(" ");
    }
}

int main()
{
    scanf("%d", &n);
    int i = 1; // initialization/starting
    hello(i);

    return 0;
}
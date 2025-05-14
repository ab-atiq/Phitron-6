#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
int n;
void hello(int i)
{
    if (i > n) // end condition
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1); // increment/decrement
}

int main()
{
    scanf("%d", &n);
    int i = 1; // initialization/starting
    hello(i);

    return 0;
}
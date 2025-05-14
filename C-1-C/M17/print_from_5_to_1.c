#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
void hello(int i)
{
    if (i == 0) // end condition
    {
        return;
    }
    printf("%d\n", i);
    hello(i - 1); // increment/decrement
}

int main()
{
    int i = 5; // initialization/starting
    hello(i);

    return 0;
}
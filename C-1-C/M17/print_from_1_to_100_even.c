#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
void hello(int i)
{
    if (i == 101) // end condition
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    hello(i + 1); // increment/decrement
}

int main()
{
    int i = 1; // initialization/starting
    hello(i);

    return 0;
}
#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
void hello(int i)
{
    if (i == 6) // end condition
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1); // increment/decrement
}

int main()
{
    int i = 1; // initialization/starting
    hello(i);

    return 0;
}
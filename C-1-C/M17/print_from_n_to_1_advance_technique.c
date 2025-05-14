#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
void hello(int i)
{
    if (i == 6) // end condition
    {
        return;
    }
    hello(i + 1);      // increment/decrement
    printf("%d\n", i); // print i after call hello function
}

int main()
{
    int i = 1; // initialization/starting
    hello(i);

    return 0;
}
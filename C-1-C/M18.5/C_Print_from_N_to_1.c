// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
int n;
void rec(int i)
{
    if (i > n) // end condition
    {
        return;
    }
    rec(i + 1); // increment/decrement
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
    rec(i);

    return 0;
}
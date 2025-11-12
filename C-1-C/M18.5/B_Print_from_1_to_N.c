// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>

// for(initialization/starting ; condition ; increment/decrement)
int n;
void rec(int i)
{
    if (i > n) // end condition
    {
        return;
    }
    printf("%d\n", i);
    rec(i + 1); // increment/decrement
}

int main()
{
    scanf("%d", &n);
    int i = 1; // initialization/starting
    rec(i);

    return 0;
}
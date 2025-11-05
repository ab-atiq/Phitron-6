// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>

void print_numbers(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}

/*  
5
1 2 3 4 5
*/
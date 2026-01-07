/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/AGEING

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    int x;
    while (tc--)
    {
        scanf("%d", &x);
        printf("%d\n", x - 10);
    }
    return 0;
}

// cps
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        int y = x - 10;

        printf("%d\n", y);
    }

    return 0;
}
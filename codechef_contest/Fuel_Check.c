/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/START211D/problems/FUELCHK

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int total_dis = x * y;
    if (total_dis >= 100)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <stdio.h>
#include <string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    // method 1: manually check for smallest lexicographical
    // int i = 0;
    // while (1)
    // {
    //     if (x[i] < y[i])
    //     {
    //         printf("%s", x);
    //         break;
    //     }
    //     else if (x[i] > y[i])
    //     {
    //         printf("%s", y);
    //         break;
    //     }
    //     else if (x[i] == '\0' && y[i] == '\0')
    //     {
    //         printf("%s", x); // if equal print any one
    //         break;
    //     }
    //     else if (x[i] == '\0')
    //     {
    //         printf("%s", x);
    //         break;
    //     }
    //     else if (y[i] == '\0')
    //     {
    //         printf("%s", y);
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }

    // method 2: using strcmp function from "string.h"
    int chk = strcmp(x, y);
    if (chk < 0)
    {
        printf("%s", x);
    }
    else if (chk > 0)
    {
        printf("%s", y);
    }
    else if (chk == 0)
    {
        printf("%s", x); // if equal print anyone
    }

    return 0;
}
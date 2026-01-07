/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/FAIRSHARE

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int int_per_person_cost = n / (k + 1); // friend + me = k+1
        int friend_pay_back = int_per_person_cost * k;
        int my_cost = n - friend_pay_back;
        printf("%d\n", my_cost);
    }
    return 0;
}
/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/CHRBUY

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int w, p, k;
        scanf("%d %d %d", &w, &p, &k);
        int wood_char = (w >= k) ? k : w;
        int rem_plastic_char_buy = k - wood_char;
        int res = 2 * wood_char + rem_plastic_char_buy;
        printf("%d\n", res);
    }
    return 0;
}
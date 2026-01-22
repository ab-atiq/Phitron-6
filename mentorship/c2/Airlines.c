/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/SPCP2

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int x_plane_have, n;
        scanf("%d %d", &x_plane_have, &n);
        int total_plane_needed = (n + 100 - 1) / 100; // ceil(n/100)
        int extra_planes = total_plane_needed - x_plane_have;
        if (extra_planes > 0)
            printf("%d\n", extra_planes);
        else
            printf("0\n");
    }
    return 0;
}
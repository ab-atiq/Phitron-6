/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/CHESS_PAIR

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n_pairs_player, x_rated_player;
        scanf("%d %d", &n_pairs_player, &x_rated_player);
        int unrated_player = 2 * n_pairs_player - x_rated_player;

        int min_rated_vs_rated = x_rated_player - unrated_player;

        if (min_rated_vs_rated < 0)
            min_rated_vs_rated = 0; // minimum can't be negative

        printf("%d\n", min_rated_vs_rated);
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
        int n, x;
        scanf("%d %d", &n, &x);

        int u = 2 * n - x;

        if (u >= x)
        {
            printf("0\n");
        }
        else
        {
            int ans = x - u;
            printf("%d\n", ans);
        }
    }

    return 0;
}
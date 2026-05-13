/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int run, over;
        scanf("%d %d", &run, &over);
        if (run <= (over * 6) * 6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/START211D/problems/WOLFDOWN

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);
        int save_birds = 0; // count all birds(0) before wolf(1)
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                break;
            save_birds++;
        }
        printf("%d\n", save_birds);
    }
    return 0;
}
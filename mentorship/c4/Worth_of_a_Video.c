/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/VIDEOWORTH

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int sec;
        scanf("%d", &sec);
        int result = sec * 24 * 1000; // 24 frames per second, 1000 words per frame
        printf("%d\n", result);
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
        int s;
        scanf("%d", &s);

        int frames = s * 24;
        int words = frames * 1000;

        printf("%d\n", words);
    }

    return 0;
}
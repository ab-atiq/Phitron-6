/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/HATTRICK

#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar(); // to consume the newline character left by previous scanf
    while (tc--)
    {
        char over_ball[15];
        // scanf("%s", over_ball); // can not get space string

        // scanf("%c %c %c %c %c %c ", &over_ball[0], &over_ball[2], &over_ball[4], &over_ball[6], &over_ball[8], &over_ball[10]); // individual char input from space separated string

        // gets(over_ball); // string with space

        fgets(over_ball, sizeof(over_ball), stdin); // safer alternative to gets()

        // printf("%s\n", over_ball);

        // single line with or operator
        if ((over_ball[0] == 'W' && over_ball[2] == 'W' && over_ball[4] == 'W') ||
            (over_ball[2] == 'W' && over_ball[4] == 'W' && over_ball[6] == 'W') ||
            (over_ball[4] == 'W' && over_ball[6] == 'W' && over_ball[8] == 'W') ||
            (over_ball[6] == 'W' && over_ball[8] == 'W' && over_ball[10] == 'W'))

        // if else ladder
        // if ((over_ball[0] == 'W') && (over_ball[2] == 'W') && (over_ball[4] == 'W'))
        // {
        //     printf("YES\n");
        // }
        // else if ((over_ball[2] == 'W') && (over_ball[4] == 'W') && (over_ball[6] == 'W'))
        // {
        //     printf("YES\n");
        // }
        // else if ((over_ball[4] == 'W') && (over_ball[6] == 'W') && (over_ball[8] == 'W'))
        // {
        //     printf("YES\n");
        // }
        // else if ((over_ball[6] == 'W') && (over_ball[8] == 'W') && (over_ball[10] == 'W'))
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

// 2nd approach
#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char ball[6][3]; // each ball: 1-2 chars (like "W" or "6")

        // read 6 space-separated inputs (either numbers or 'W')
        scanf("%s %s %s %s %s %s", ball[0], ball[1], ball[2], ball[3], ball[4], ball[5]);

        int hattrick = 0;

        // check for 3 consecutive 'W'
        for (int i = 0; i <= 3; i++)
        {
            if (ball[i][0] == 'W' && ball[i + 1][0] == 'W' && ball[i + 2][0] == 'W')
            {
                hattrick = 1;
                break;
            }
        }

        printf("%s\n", hattrick ? "YES" : "NO");
    }
    return 0;
}

// previous code in 1D char array
/*
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar(); // to consume the newline character left by previous scanf
    while (tc--)
    {
        char ball[6]; // each ball: 1-2 chars (like "W" or "6")

        // read 6 space-separated inputs (either numbers or 'W')
        scanf("%c %c %c %c %c %c ", &ball[0], &ball[1], &ball[2], &ball[3], &ball[4], &ball[5]);
        // printf("%c %c %c %c %c %c\n", ball[0], ball[1], ball[2], ball[3], ball[4], ball[5]);

        int hattrick = 0;

        // check for 3 consecutive 'W'
        for (int i = 0; i <= 3; i++)
        {
            if (ball[i] == 'W' && ball[i + 1] == 'W' && ball[i + 2] == 'W')
            {
                hattrick = 1;
                break;
            }
        }

        printf("%s\n", hattrick ? "YES" : "NO");
    }
    return 0;
}
*/

// cps
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char a, b, c, d, e, f;
        scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

        if (a == 'W' && b == 'W' && c == 'W')
        {
            printf("YES\n");
        }
        else if (b == 'W' && c == 'W' && d == 'W')
        {
            printf("YES\n");
        }
        else if (c == 'W' && d == 'W' && e == 'W')
        {
            printf("YES\n");
        }
        else if (d == 'W' && e == 'W' && f == 'W')
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
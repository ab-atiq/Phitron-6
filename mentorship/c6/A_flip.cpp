/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc289/tasks/abc289_a

#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}

// cps
#include <stdio.h>
#include <string.h>

int main()
{

    char s[11];
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}
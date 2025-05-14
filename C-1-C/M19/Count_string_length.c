#include <stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int cnt = rec(s, i + 1);
    return cnt + 1;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = rec(s, 0);
    printf("%d", ans);

    return 0;
}

/*
input:
hello
output:
5

input:
helloworld
output:
10
*/
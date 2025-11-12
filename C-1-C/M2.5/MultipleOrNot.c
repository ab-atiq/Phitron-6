// https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm82x5rnr003er00114f9qwvx?language=c_103

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
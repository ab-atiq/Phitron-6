#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if ('0' <= x && x <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if ('a' <= x && x <= 'z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}
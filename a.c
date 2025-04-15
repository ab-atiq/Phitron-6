#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a > 65)
    {
        printf("ALPHA\n");
        if (a < 97)
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
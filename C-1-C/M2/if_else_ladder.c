#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger khabo\n");
    }
    else if (tk >= 50)
    {
        printf("Fuska khabo\n");
    }
    else
    {
        printf("Burger khabo na\n");
    }
}
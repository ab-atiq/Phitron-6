#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);

    if (val == 0)
    {
        printf("Equal");
    }
    else if (val < 0)
    {
        printf("A is smaller");
    }
    else if (val > 0)
    {
        printf("B is smaller");
    }

    return 0;
}

/*
abcdefghijklmn apple

output:
A is smaller

apply apple

output:
B is smaller

apple apple

output:
Equal
*/
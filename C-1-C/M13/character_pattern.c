#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, val = 1;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= space; j++)
        // {
        //     printf(" ");
        // }
        for (int j = 1; j <= val; j++)
        {
            printf("%c ", j + 'A' - 1);
        }
        printf("\n");
        val++;
        space--;
    }

    return 0;
}

/*
6
A
A B
A B C
A B C D
A B C D E
A B C D E F
*/
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
            printf("%d", j);
        }
        printf("\n");
        val++;
        space--;
    }

    return 0;
}

/*
6

1
12
123
1234
12345
123456
*/
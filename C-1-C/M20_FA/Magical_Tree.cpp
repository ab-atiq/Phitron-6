#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // 1
    // 6
    // 3 = 3/2 = 1.5 = 1
    // 7

    // 5 = 5/2 = 2.5 = 2
    // 8
    int cal_n = 6 + (n / 2);

    int star = 1, space = cal_n - 1;

    // row - pyramid(tree leaf)
    for (int i = 1; i <= cal_n; i++)
    {
        // space print
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        // star print
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    // row - pyramid(tree body)
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
*/
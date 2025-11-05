// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    // upper pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    // lower pyramid reverse of upper pyramid
    star = (2 * n) - 1, space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}

/*
6
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *
*/
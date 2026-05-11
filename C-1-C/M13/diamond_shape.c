#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
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

    // star = (2 * n) - 1, space = 0; // middle line duplicate
    star = (2 * n) - 3, space = 1; // middle line not duplicate

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

/*
6
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *

*/
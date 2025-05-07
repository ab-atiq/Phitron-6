#include <stdio.h>

int my_abs(int num)
{
    if (num < 0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", my_abs(num));
    return 0;
}

/*
// using pointer
#include <stdio.h>

void my_abs(int *num)
{
    if (*num < 0)
    {
        *num = -*num;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    my_abs(&num);
    printf("%d\n", num);
    return 0;
} */

/*
Sample Input
5
Sample Output
5
Sample input
-7
Sample Output
7
*/
#include <stdio.h>

int check_sign(int num)
{
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int result = check_sign(num);
    if (result == 1)
    {
        printf("positive\n");
    }
    else if (result == -1)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }
    return 0;
}
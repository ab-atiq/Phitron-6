#include <stdio.h>

// Function to check if a number is lucky
int isLucky(int n)
{
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit != 4 && last_digit != 7) // last digit not 4 and not 7
        {
            return 0; // not lucky
        }
        n /= 10;
    }
    return 1; // lucky
}

int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++)
    {
        int chk = isLucky(i);
        if (chk == 1)
        {
            if (n % i == 0) // almost lucky number
            {
                printf("YES\n");
                return 0;
            }
        }

    }

    printf("NO\n");
    return 0;
}
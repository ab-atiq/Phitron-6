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
    // redundant(because all lucky number divisible by licky number)
    // if (isLucky(n))
    // {
    //     printf("YES\n");
    //     return 0;
    // }
    // Check all numbers from 1 to n to see if any lucky number divides n then that number is almost lucky
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i))
        {
            if (n % i == 0)
            {
                printf("YES\n");
                return 0;
            }
        }
        // short form
        // if (isLucky(i) && n % i == 0)
        // {
        //     printf("YES\n");
        //     return 0;
        // }
    }

    printf("NO\n");
    return 0;
}

/*
input:
16
output:
YES (16 is not Lucky but it is divisible by lucky number 4 so, 16 is almosh lucky number)
*/
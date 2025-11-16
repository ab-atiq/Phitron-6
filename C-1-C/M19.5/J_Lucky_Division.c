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
    // 1 - 1000 all lucky numbers are 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777. Check Divisible by any one of them.
    for (int i = 1; i <= n; i++)
    {
        int chk = isLucky(i);
        if (chk == 1)
        // if (isLucky(i)) // another way to write
        {
            if (n % i == 0) // almost lucky number
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

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    // 1 - 1000 all lucky numbers are 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777. Check Divisible by any one of them.
    if ((x % 4 == 0) || (x % 7 == 0) || (x % 44 == 0) || (x % 47 == 0) || (x % 74 == 0) || (x % 77 == 0) || (x % 444 == 0) || (x % 447 == 0) || (x % 474 == 0) || (x % 477 == 0) || (x % 744 == 0) || (x % 747 == 0) || (x % 774 == 0) || (x % 777 == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

// solution using array
#include <stdio.h>
int main()
{
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    scanf("%d", &n);
    int is_almost_lucky = 0;

    for (int i = 0; i < sizeof(lucky_numbers) / sizeof(lucky_numbers[0]); i++)
    {
        if (n % lucky_numbers[i] == 0)
        {
            is_almost_lucky = 1;
            break;
        }
    }

    if (is_almost_lucky)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
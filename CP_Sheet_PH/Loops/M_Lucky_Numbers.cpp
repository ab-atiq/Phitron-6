// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
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
    int a, b;
    scanf("%d %d", &a, &b);

    // Check all numbers from a to b to see lucky number
    int found_lucky = 0; // flag to check if we found any lucky number
    for (int i = a; i <= b; i++)
    {
        int chk = isLucky(i);
        if (chk == 1)
        // if (isLucky(i)) // another way to write
        {
            printf("%d ", i);
            found_lucky = 1;
        }
    }

    if (!found_lucky)
    {
        printf("-1\n");
    }
    return 0;
}

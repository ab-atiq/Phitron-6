#include <stdio.h>

// Function to check if a number is balanced
int isBalanced(int num)
{
    int even = 0, odd = 0, digit;
    int temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        temp /= 10;
    }

    return (even == odd);
}

int main()
{
    int L, R, found = 0;
    scanf("%d %d", &L, &R);

    for (int i = L; i <= R; i++)
    {
        if (isBalanced(i))
        {
            printf("%d\n", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}

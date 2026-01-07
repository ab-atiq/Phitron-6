/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/DICENUM

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int a1, a2, a3, b1, b2, b3;
        scanf("%d %d %d", &a1, &a2, &a3);
        scanf("%d %d %d", &b1, &b2, &b3);
        int max_a = a1, mid_a = a2, min_a = a3;
        if (a1 >= a2 && a1 >= a3)
        {
            max_a = a1;
            if (a2 >= a3)
            {
                mid_a = a2;
                min_a = a3;
            }
            else
            {
                mid_a = a3;
                min_a = a2;
            }
        }
        else if (a2 >= a1 && a2 >= a3)
        {
            max_a = a2;
            if (a1 >= a3)
            {
                mid_a = a1;
                min_a = a3;
            }
            else
            {
                mid_a = a3;
                min_a = a1;
            }
        }
        else
        {
            max_a = a3;
            if (a1 >= a2)
            {
                mid_a = a1;
                min_a = a2;
            }
            else
            {
                mid_a = a2;
                min_a = a1;
            }
        }
        int max_b = b1, mid_b = b2, min_b = b3;
        if (b1 >= b2 && b1 >= b3)
        {
            max_b = b1;
            if (b2 >= b3)
            {
                mid_b = b2;
                min_b = b3;
            }
            else
            {
                mid_b = b3;
                min_b = b2;
            }
        }
        else if (b2 >= b1 && b2 >= b3)
        {
            max_b = b2;
            if (b1 >= b3)
            {
                mid_b = b1;
                min_b = b3;
            }
            else
            {
                mid_b = b3;
                min_b = b1;
            }
        }
        else
        {
            max_b = b3;
            if (b1 >= b2)
            {
                mid_b = b1;
                min_b = b2;
            }
            else
            {
                mid_b = b2;
                min_b = b1;
            }
        }

        int formed_a = max_a * 100 + mid_a * 10 + min_a;
        int formed_b = max_b * 100 + mid_b * 10 + min_b;

        // printf("Alice's number: %d\n", formed_a);
        // printf("Bob's number: %d\n", formed_b);

        if (formed_a > formed_b)
            printf("Alice\n");
        else if (formed_b > formed_a)
            printf("Bob\n");
        else
            printf("Tie\n");
    }
    return 0;
}

// cps - more clear version
#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, d, e, f;

        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        int mx = a;
        int mn = a;
        int sum = a + b + c;

        if (b > mx)
        {
            mx = b;
        }
        if (c > mx)
        {
            mx = c;
        }

        if (b < mn)
        {
            mn = b;
        }
        if (c < mn)
        {
            mn = c;
        }

        int x = sum - mx - mn;

        int alice = mx * 100 + x * 10 + mn;

        mx = d;
        mn = d;
        sum = d + e + f;

        if (e > mx)
        {
            mx = e;
        }
        if (f > mx)
        {
            mx = f;
        }

        if (e < mn)
        {
            mn = e;
        }
        if (f < mn)
        {
            mn = f;
        }

        d = sum - mx - mn;

        int bob = mx * 100 + d * 10 + mn;

        if (alice > bob)
        {
            printf("Alice\n");
        }
        else if (bob > alice)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Tie\n");
        }
    }

    return 0;
}
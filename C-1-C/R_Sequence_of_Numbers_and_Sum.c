// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

// solution - 1
#include <stdio.h>
int main()
{
    int a, b;
    // while (scanf("%d%d", &a, &b) != EOF)
    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            break;
            // continue;
        }
        else if (a >= b) // if (a > b) then a==b sum is missing
        {
            int sum = 0;
            for (int i = b; i <= a; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }

        else if (a < b)
        {
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }
    }
    return 0;
}

// end of file use - solution - 2
#include <stdio.h>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    // while (1)
    {
        // scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            break; // If a or b is non-positive, exit the loop
            // continue;
        }
        else if (a >= b) // if (a > b) then a==b sum is missing
        {
            int sum = 0;
            for (int i = b; i <= a; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }

        else if (a < b)
        {
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }
    }
    return 0;
}

// solution - 3 (min and max find then loop)

#include <stdio.h>
int main()
{
    int n, m;
    while (1)
    {
        scanf("%d %d", &n, &m);

        // Stop the program if any number ≤ 0
        if (n <= 0 || m <= 0)
            break;

        // min and max find
        // int min, max;
        // if (n <= m)
        // {
        //     min = n;
        //     max = m;
        // }
        // else
        // {
        //     min = m;
        //     max = n;
        // }

        // swap method
        int min = n, max = m;
        if (min > max)
        {
            // swap
            int temp = min;
            min = max;
            max = temp;
        }

        int sum = 0;

        for (int i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}

// solution - 4 (start and end find then loop)
#include <stdio.h>

int main()
{
    int n, m;
    while (1)
    {
        scanf("%d %d", &n, &m);

        // Stop the program if any number ≤ 0
        if (n <= 0 || m <= 0)
            break;

        int start = n < m ? n : m;
        int end = n > m ? n : m;
        int sum = 0;

        for (int i = start; i <= end; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}

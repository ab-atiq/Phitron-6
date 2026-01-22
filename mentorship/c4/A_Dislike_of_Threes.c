/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1560/problem/A

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int k_th;
        scanf("%d", &k_th);

        int start = 0; // kth number calculation
        for (int i = 1; i <= k_th; i++)
        {
            start++;
            // divisible by 3 or last digit 3
            if (start % 3 == 0 && start % 10 == 3) // 33 // this condition optional it will be handled in next two else if statements.
            {
                start++;
            }
            else if (start % 3 == 0) // 12
            {
                start++;
                if (start % 10 == 3) // 13
                    start++;
            }
            else if (start % 10 == 3) // 23
            {
                start++;
                if (start % 3 == 0) // 24
                    start++;
            }
        }
        printf("%d\n", start);
    }

    return 0;
}

// cps
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int k;
        scanf("%d", &k);

        int count = 1;        // kth times counted
        for (int i = 1;; i++) // infinite loop
        {
            if (i % 3 == 0)
            {
                continue;
            }
            if (i % 10 == 3)
            {
                continue;
            }

            if (count == k)
            {
                printf("%d\n", i); // print kth number which is count of i.
                break;
            }

            count++;
        }
    }

    return 0;
}
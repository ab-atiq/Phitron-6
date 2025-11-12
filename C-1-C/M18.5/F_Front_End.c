#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // two pointer technique - while loop
    // int i = 0, j = n - 1;
    // while (i <= j)
    // {
    //     if (i == j)
    //     {
    //         printf("%d ", a[i]);
    //     }
    //     else
    //     {
    //         printf("%d ", a[i]);
    //         printf("%d ", a[j]);
    //     }
    //     i++;
    //     j--;
    // }

    // for loop technique
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        // if (i == j)
        // {
        //     printf("%d ", a[i]); // middle element when n is odd
        // }
        // else
        // {
        //     printf("%d %d ", a[i], a[j]);
        // }

        printf("%d ", a[i]);
        if (i != j) // to avoid printing middle element twice when n is odd
        {
            printf("%d ", a[j]);
        }
    }

    return 0;
}

/*
5
1 2 3 4 5

output:
1 5 2 4 3
*/
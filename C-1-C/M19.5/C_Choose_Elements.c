#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]); // Read array elements
    }

    // Selection Sort the array in descending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i]; // Add only positive numbers
        }
        else
        {
            break; // Stop if we encounter non-positive numbers. If we sum with negative numbers, it will decrease the sum.
        }
    }

    printf("%lld\n", sum); // Output the maximum sum
    return 0;
}

/*
3 3
1 2 3

output: 6

3 2
-6 -3 2

output: 2
*/
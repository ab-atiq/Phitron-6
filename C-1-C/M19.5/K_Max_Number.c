// easy solution
#include <stdio.h>
#include <limits.h>

int max_val = INT_MIN; // global variable to store the maximum value

void findMax(int arr[], int n, int i)
{
    if (i == n) // base case: reached end of array
        return;

    if (arr[i] > max_val)
        max_val = arr[i]; // update max value

    findMax(arr, n, i + 1); // recursive call for next index
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMax(arr, n, 0); // start recursion from index 0

    printf("%d\n", max_val);
    return 0;
}

// method 1: solve depend on array index
// #include <stdio.h>
// #include <limits.h>

// int findMax(int a[], int n, int i)
// {
//     if (i == n - 1) // if index is last item then that is return as max value
//     {
//         return a[i];
//     }

//     int max_rest = findMax(a, n, i + 1);
//     if (a[i] > max_rest)
//     {
//         return a[i];
//     }
//     else
//     {
//         return max_rest;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int max_value = findMax(a, n, 0);
//     printf("%d\n", max_value);

//     return 0;
// }

/*
// method 1.1: solve depend on array index
#include <stdio.h>
#include <limits.h>

int findMax(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN; // Return the smallest possible integer when the array is exhausted/out of index
    }
    int max_rest = findMax(a, n, i + 1);
    return (a[i] > max_rest) ? a[i] : max_rest;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_value = findMax(a, n, 0);
    printf("%d\n", max_value);

    return 0;
}
 */

/*
// method 2: solve depend on array size
#include <stdio.h>

long long int max(int arr[], int n)
{
    if (n == 1) // If the array has only one element, the maximum value is that element itself.
    {
        return arr[0];
    }

    // Compare the first element of the array with the maximum of the rest of the array (obtained by a recursive call). Return the larger of the two.
    long long int max_of_rest = max(arr + 1, n - 1);
    return (arr[0] > max_of_rest) ? arr[0] : max_of_rest;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int res = max(arr, n);
    printf("%lld\n", res);
    return 0;
}
 */

/* // method 2.1: if else instead ternary
#include <stdio.h>

int findMax(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int max_rest = findMax(arr + 1, n - 1);
    if (arr[0] > max_rest)
    {
        return arr[0];
    }
    else
    {
        return max_rest;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findMax(arr, n));
    return 0;
} */
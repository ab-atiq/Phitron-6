// // method 1: 0 to n-1 index value sum

// #include <stdio.h>
// long long int sum(int a[], int n, int i)
// {
//     if (i == n - 1)
//     {
//         return a[n - 1];
//     }
//     long long int arr_val = a[i];
//     long long int sum_val = sum(a, n, i + 1);
//     return arr_val + sum_val;
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

//     printf("%lld", sum(a, n, 0));

//     return 0;
// }

// method 2: n-1 to 0 index value sum
/*
#include <stdio.h>
long long sum(int arr[], int n)
{
    if (n == 0)
    {
        return arr[0];
    }
    return arr[n - 1] + sum(arr, n - 1);
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
    printf("%lld\n", sum(arr, n));
    return 0;
}
*/

// // method 3: using global variable
// #include <stdio.h>
// long long int sum = 0;
// long long int summation(int arr[], int n)
// {
//     if (n < 0)
//     {
//         return sum;
//     }
//     sum += arr[n];
//     return summation(arr, n - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("%d\n", summation(arr, n - 1));
//     return 0;
// }

// method 4: using global variable and void function
#include <stdio.h>
long long int sum = 0;
void summation(int arr[], int n)
{
    // if (n < 0)
    if (n == -1)
    {
        printf("%lld\n", sum); // print sum - global variable when base condition meets
        return;
    }
    sum += arr[n];
    summation(arr, n - 1);
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
    summation(arr, n - 1);
    // printf("%d\n", sum); // print sum - global variable after recursion ends
    return 0;
}

// method 5: passing parameter by reference (using pointer)
// #include <stdio.h>
// void summation(int arr[], int n, long long int *sum)
// {
//     if (n == -1)
//     {
//         return;
//     }
//     *sum += arr[n];
//     summation(arr, n - 1, sum);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     long long int sum = 0;
//     summation(arr, n - 1, &sum);
//     printf("%lld\n", sum);
//     return 0;
// }

/*
5
10 20 30 40 50

ouput
150
*/


//
/* 
#include <stdio.h>

long long int sum(int a[], int n, int index, long long int s)
{
    if (index == n)
    {
        return s;
    }

    sum(a, n, index + 1, s + a[index]);
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
    long long int value = sum(a, n, 0, 0);

    printf("%lld", value);

    return 0;
}
*/
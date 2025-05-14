#include <stdio.h>

// method 1: 0 to n-1 index value sum
long long int sum(int a[], int n, int i)
{
    if (i == n - 1)
    {
        return a[n - 1];
    }
    long long int arr_val = a[i];
    long long int sum_val = sum(a, n, i + 1);
    return arr_val + sum_val;
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

    printf("%lld", sum(a, n, 0));

    return 0;
}

// method 2: n-1 to 0 index value sum
/* 
long long sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
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

/*
5
10 20 30 40 50

ouput
150
*/
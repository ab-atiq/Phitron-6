// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>
#include <string.h> // for memset function
int main()
{
    // int fre[100001]={0}; // set frequency array value as 0
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n + 1];

    // int fre[m + 1] = {0}; // all value 0 assign in variable length array will not work properly

    int fre[m + 1];
    // set all value 0 using memset function
    // memset(fre, 0, sizeof(fre));
    // set all value 0 using loop
    for (int i = 0; i <= m; i++)
    {
        fre[i] = 0; // set frequency array value as 0
    }

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // method : frequency array calculate
    for (int i = 1; i <= n; i++)
    {
        fre[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}

// seperate functions create
#include <stdio.h>

// set frequency array value as 0
void set_fre_array_zero(int fre[], int m)
{
    for (int i = 0; i <= m; i++)
    {
        fre[i] = 0; // set frequency array value as 0
    }
}

// input array elements
void input_array(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// calculate frequency
void frequency_count(int arr[], int fre[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        fre[arr[i]]++;
    }
}

// print frequency array
void print_fre_array(int fre[], int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n + 1];

    int fre[m + 1];

    // set frequency array value as 0
    set_fre_array_zero(fre, m);

    // input array elements
    input_array(arr, n);

    // calculate frequency
    frequency_count(arr, fre, n);

    // print frequency array
    print_fre_array(fre, m);

    return 0;
}

/*
Input:
10 5
1 2 3 4 5 3 2 1 5 3
Output:
2
2
3
1
2

*/

// array and frequency array as global variable
/*
#include <stdio.h>
#include <string.h>

int arr[100001];
int fre[100001];

// set frequency array value as 0
void set_fre_array_zero()
{
    for (int i = 0; i <= 100000; i++)
    {
        fre[i] = 0; // set frequency array value as 0
    }
}

// input array elements
void input_array(int n)
{
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// calculate frequency
void frequency_count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fre[arr[i]]++;
    }
}

// print frequency array
void print_fre_array(int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    // set frequency array value as 0
    set_fre_array_zero(fre, m);

    // input array elements
    input_array(n);

    // calculate frequency
    frequency_count(n);

    // print frequency array
    print_fre_array(m);

    return 0;
}
 */
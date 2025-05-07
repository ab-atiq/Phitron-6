/* #include <stdio.h>
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
} */

#include <stdio.h>
#include <string.h>

void frequency_count(int arr[], int fre[], int n, int m)
{
    // method : frequency array calculate
    for (int i = 1; i <= n; i++)
    {
        fre[arr[i]]++;
    }
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n + 1];

    int fre[m + 1];

    for (int i = 0; i <= m; i++)
    {
        fre[i] = 0; // set frequency array value as 0
    }

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    frequency_count(arr, fre, n, m);

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}
#include <stdio.h>

int count_before_one(int a[], int n)
{
    // method 1
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        cnt++;
    }
    return cnt;

    // method 2
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == 1) {
    //         return i; // i is count before 1
    //     }
    // }
    // return n; // if 1 not present then ans size
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
    int result = count_before_one(arr, n);
    printf("%d\n", result);
    return 0;
}
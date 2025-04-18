// Take an array from input and count how many odd numbers are present in that array.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // count odd numbers
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cnt++;
        }
    }
    printf("%d ", cnt);
    return 0;
}

/*
input:
5
1 2 3 4 5
output:
3
*/
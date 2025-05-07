#include <stdio.h>

void change_it(int arr[], int size)
{
    arr[size - 1] = 100;
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

    // change last digit with 100
    change_it(arr, n);

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
Sample Input
5
10 20 30 40 50
Sample Output
10 20 30 40 100

Sample Input
3
1 2 3
Sample Output
1 2 100

*/
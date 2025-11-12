// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

// print even indices of an array in reverse order using recursion
#include <stdio.h>
void print_even_indices_reverse(int arr[], int index)
{
    if (index < 0)
    {
        return;
    }

    if (index % 2 == 0) // even index
    {
        printf("%d ", arr[index]);
    }

    print_even_indices_reverse(arr, index - 1);
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

    print_even_indices_reverse(arr, n - 1);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int fre[10] = {0}; // value will be 0-9

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        fre[val]++; // frequency calculate
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %d\n", i, fre[i]); // print number with frequency
    }

    return 0;
}

/*
10
2 4 5 8 6 8 9 4 2 2

Output:
0 -> 0
1 -> 0
2 -> 3
3 -> 0
4 -> 2
5 -> 1
6 -> 1
7 -> 0
8 -> 2
9 -> 1

*/
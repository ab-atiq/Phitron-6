#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // index value delete
    int idx;
    scanf("%d", &idx);

    // remove index value and move backward all value after given index 
    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--; // decrease array size

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

/* 
5
10 20 30 40 50
2

output:
10 20 40 50

*/
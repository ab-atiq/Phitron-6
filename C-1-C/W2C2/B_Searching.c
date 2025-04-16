#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n]; // array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x; // target element
    scanf("%d", &x);
    bool flag = false;
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) // found
        {
            // printf("%d", i);
            // return 0;
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag)
    {
        printf("%d", idx);
    }
    else
    {
        printf("%d", -1); // not found
    }
    return 0;
}
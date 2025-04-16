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

/*  
Input
3
3 0 1
0
Output
1

Input
5
1 3 0 4 5
10
Output
-1

Input
4
2 3 2 1
2
Output
0
*/
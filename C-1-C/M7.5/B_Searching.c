// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n]; // array 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x; // target element
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) // found
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", -1); // not found

    return 0;
}

// 2nd way
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // size of array
    int arr[n];      // array declaration
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x; // search value
    scanf("%d", &x);

    int flag = 0; // 0 means item not present

    // print array
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] == x)
        {
            printf("%d", i); // i_th index
            // item found then break
            // break;
            // return 0;
            flag = 1e9; // found target item
            break;
        }
        // else
        // {
        //     printf("%d", -1); // -1
        // }
    }

    // not found
    if (flag == 0)
    {
        printf("%d", -1); // -1
    }

    return 0;
}

// 3nd way
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


// 4th way
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int pos = -1; // assume not found
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i; // store position when found
            break;   // stop after first match
        }
    }

    printf("%d", pos);
    return 0;
}

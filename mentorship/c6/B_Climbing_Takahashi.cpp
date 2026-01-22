/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc235/tasks/abc235_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mostHeight = 0; // smallest height
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mostHeight)
        {
            mostHeight = arr[i];
        }
        else
        {
            break; // stop climbing when height decreases or equals
        }
    }
    cout << mostHeight << endl;
    return 0;
}

// cps
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

    int ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            ans = arr[i];
        }
        else
        {
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
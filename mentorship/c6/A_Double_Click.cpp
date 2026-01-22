/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc297/tasks/abc297_a

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0; // not double click
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] <= d)
        {
            flag = 1;               // double click
            cout << arr[i] << endl; // output the time of double click
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl; // no double click
    }
    return 0;
}


// cps
#include<stdio.h>

int main() {

    int n, d;
    scanf("%d%d", & n, & d);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int ans = -1;

    for (int i = 0; i < n - 1; i++) {
        int x1 = arr[i], x2 = arr[i + 1];
        if (x2 - x1 <= d) {
            ans = x2;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
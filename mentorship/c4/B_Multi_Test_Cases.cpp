/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc284/tasks/abc284_b

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

// optimize - cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

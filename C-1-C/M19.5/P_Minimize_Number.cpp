/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;

    int arr[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    bool flag = true;

    while (flag)
    {
        int total_num_div = 0;

        for (int i = 0; i < sz; i++)
        {
            if (arr[i] % 2 == 0)
            {
                total_num_div++;
                arr[i] = arr[i] / 2;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (total_num_div == sz)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}

// easy and sorter solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int min_div = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int cnt = 0;
        while (x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }
        min_div = min(min_div, cnt);
    }
    cout << min_div << endl;
    return 0;
}
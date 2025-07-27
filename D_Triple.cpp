#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int fre[n + 1];
        for (int i = 0; i <= n; i++)
        {
            fre[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            fre[x]++;
        }
        bool is_three = false;
        for (int i = 1; i <= n; i++)
        {
            if (fre[i] >= 3)
            {
                is_three = true;
                cout << i << endl;
                break;
            }
        }
        if (!is_three)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        int minTop = 0, maxTop = 0;
        for (char ch : str)
        {
            if (ch == '0')
            {
                minTop++;
                maxTop++;
            }
            else if (ch == '2')
            {
                maxTop++;
            }
        }

        string ans(n, '+');
        int minBottom = k - maxTop;
        int maxBottom = k - minTop;

        for (int i = 0; i < minTop; i++)
        {
            ans[i] = '-';
        }
        for (int i = 0; i < minBottom; i++)
        {
            ans[n - 1 - i] = '-';
        }

        for (int i = minTop; i < maxTop; i++)
        {
            ans[i] = '?';
        }

        for (int i = n - maxBottom; i < n - minBottom; i++)
        {
            ans[i] = '?';
        }

        cout << ans << '\n';
    }
}

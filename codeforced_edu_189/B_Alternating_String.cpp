#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int bad_adj = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                bad_adj++;
            }
        }

        if (bad_adj <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
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
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
            s[i] = tolower(s[i]);

        string pattern = "meow";
        int i = 0, j = 0;

        while (i < n && j < 4)
        {
            if (s[i] != pattern[j])
                break;

            while (i < n && s[i] == pattern[j])
                i++;
            j++;
        }

        if (i == n && j == 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

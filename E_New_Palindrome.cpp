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
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        int oddCount = 0;
        for (int f : freq)
            if (f % 2 != 0)
                oddCount++;

        bool allSame = true;
        for (char c : s)
        {
            if (c != s[0])
            {
                allSame = false;
                break;
            }
        }

  
        if (allSame)
        {
            cout << "NO\n";
            continue;
        }

        
        int distinct = 0;
        for (int f : freq)
            if (f > 0)
                distinct++;
        if (oddCount == 1 && distinct == 2 && s.size() % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
            // cout << s[0] << s.size() - 2 << s.back() << endl;
            // cout << s.front() << s.size() - 2 << s.back() << endl;
            // cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
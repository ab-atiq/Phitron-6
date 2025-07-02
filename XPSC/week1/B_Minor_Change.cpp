#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int len = s.length();
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
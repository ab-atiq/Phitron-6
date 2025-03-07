#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string st1, st2;
        cin >> st1 >> st2;
        int s1 = st1.length();
        int s2 = st2.length();

        if (s1 != s2)
        {
            cout << "NO" << endl;
            continue;
        }
        int frq1[26] = {0}, frq2[26] = {0};
        for (int i = 0; i < s1; i++)
        {
            frq1[st1[i] - 'a']++;
            frq2[st2[i] - 'a']++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (frq1[i] != frq2[i])
            {
                flag = false;
            }
        }
        if (flag)
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
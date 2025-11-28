// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        bool good = false;

        for (int i = 0; i + 2 < (int)s.size(); i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                good = true;
                break;
            }
        }

        cout << (good ? "Good" : "Bad") << "\n";
    }

    return 0;
}

// adil
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string s;
        cin >> s;

        if (s.find("101") != -1 || s.find("010") != -1)
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;
    }
}
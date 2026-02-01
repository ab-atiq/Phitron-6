/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc303/tasks/abc303_a

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int match_cnt = 0; // total match character count
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            match_cnt++;
        }
        else if ((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1'))
        {
            match_cnt++;
        }
        else if ((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0'))
        {
            match_cnt++;
        }
    }

    if (match_cnt == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

///

#include <bits/stdc++.h>
using namespace std;

bool similar(char a, char b)
{
    if (a == b)
        return true;
    if ((a == '1' && b == 'l') || (a == 'l' && b == '1'))
        return true;
    if ((a == '0' && b == 'o') || (a == 'o' && b == '0'))
        return true;
    return false;
}

int main()
{
    int N;
    string S, T;
    cin >> N >> S >> T;

    for (int i = 0; i < N; i++)
    {
        if (!similar(S[i], T[i]))
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}

//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S, T;

    cin >> N;
    cin >> S >> T;

    int flag = 1;
    for (int i = 0; i < N; i++)
    {
        char a = S[i], b = T[i];

        if (a == b)
            continue;

        if ((a == '1' && b == 'l') || (a == 'l' && b == '1'))
            continue;
        if ((a == '0' && b == 'o') || (a == 'o' && b == '0'))
            continue;

        flag = 0;
        // cout << "No\n";
        // return 0;
    }
    if (flag == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
    // cout << "Yes\n";
    return 0;
}

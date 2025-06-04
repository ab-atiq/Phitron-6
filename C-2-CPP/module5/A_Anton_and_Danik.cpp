#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // char s[n];
    // cin >> s; // compilation error on codeforces
    // scanf("%s", s); // Using scanf to read a string of characters

    string s;
    cin >> s;

    int A_cnt = 0, D_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            A_cnt++;
        }
        else if (s[i] == 'D')
        {
            D_cnt++;
        }
    }

    if (A_cnt > D_cnt)
    {
        cout << "Anton" << endl;
    }
    else if (D_cnt > A_cnt)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
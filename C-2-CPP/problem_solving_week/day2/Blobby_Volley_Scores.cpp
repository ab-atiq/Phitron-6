/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/BLOBBYVOLLEY

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && s[i] == 'A')
            {
                a++;
            }
            else if (s[i] == s[i - 1])
            {
                if (s[i] == 'A')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
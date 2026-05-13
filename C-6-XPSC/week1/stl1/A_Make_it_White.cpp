/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/1927/A

// Approach: We need to find the first and last occurrence of 'B' in the string. The length of the segment that needs to be painted white will be the distance between these two occurrences plus one (to account for the inclusive nature of the segment).
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
        int black1 = -1, black2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (black1 == -1)
                {
                    black1 = i;
                }
                black2 = i; // always last black update
            }
        }
        // if (black1 == -1)
        // {
        //     cout << 0 << endl; // no need to change
        // }
        // else if (black1 == black2)
        // {
        //     cout << 1 << endl;
        // }
        // else
        // {
        // It is guaranteed that at least one cell of the given strip is black.
        cout << black2 - black1 + 1 << endl;
        // }
    }
    return 0;
}

// find function use - find function TC O(TC * N), here, N<=10 so, overall TC = 10^5
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
        int firstPos = -1, secondPos = -1;
        firstPos = s.find('B'); // if not found then return -1
        secondPos = s.rfind('B');

        // It is guaranteed that at least one cell of the given strip is black.
        cout << secondPos - firstPos + 1 << endl; // inclusive length of the segment so, +1 used
    }
    return 0;
}
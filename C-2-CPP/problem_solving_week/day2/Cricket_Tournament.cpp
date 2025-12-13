/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/CRICKETUDYAM

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n_teams, m_matches;
        cin >> n_teams >> m_matches;
        int total_matches = 0;
        while (n_teams > 1)
        {
            total_matches += n_teams / 2;
            n_teams = (n_teams + 1) / 2; // ceil value
        }
        if (total_matches >= m_matches)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
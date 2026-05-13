/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/44/A

// Approach: We can use a map to count the occurrences of each unique pair of species and leaves. The size of the map will give us the number of unique pairs, which is the total number of plants in the garden.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<string, string>, int> mp;
    int total = 0;
    
    for (int i = 0; i < n; i++)
    {
        string speces, leves;
        cin >> speces >> leves;
        pair<string, string> p = make_pair(speces, leves);
        // if (mp.find(p) == mp.end())
        if (mp[p] == 0)
        {
            mp[p] = 1;
        }
    }

    // for (auto it : mp)
    // {
    //     total += it.second;
    // }
    // cout << total << endl;

    cout << mp.size() << endl; // size of the map will give us the number of unique pairs
    return 0;
}
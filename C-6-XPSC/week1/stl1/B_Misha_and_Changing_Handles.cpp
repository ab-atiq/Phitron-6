/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/501/B

/*
You can solve it using only one map<string,string> and one simple loop.

The idea: store: original -> current

Example: Misha -> ILoveCodeforces
Later: ILoveCodeforces -> MikeMirzayanov

We search whose current handle is ILoveCodeforces,
then update it to MikeMirzayanov.
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int q;
//     cin >> q;

//     map<string, string> mp;

//     while (q--)
//     {
//         string old_handle, new_handle;
//         cin >> old_handle >> new_handle;

//         bool found = false;

//         // check if old_handle is already someone's current handle
//         for (auto &it : mp) // must use & to update the original value in the map
//         {
//             if (it.second == old_handle)
//             {
//                 it.second = new_handle;
//                 found = true;
//                 break;
//             }
//         }

//         // first time changing handle
//         if (!found)
//         {
//             mp[old_handle] = new_handle;
//         }
//     }

//     cout << mp.size() << endl;

//     for (auto it : mp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }

// xpsc - solve using 2 map - one for original -> current and another for current -> original
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> ans, has;

    for (int i = 0; i < n; i++)
    {
        string old_h, new_h;
        cin >> old_h >> new_h;
        if (has.find(old_h) == has.end())
        {
            ans[old_h] = new_h;
            has[new_h] = old_h;
        }
        else
        {
            string original = has[old_h];
            ans[original] = new_h;
            has.erase(old_h);
            has[new_h] = original;
        }
    }

    cout << ans.size() << endl;

    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
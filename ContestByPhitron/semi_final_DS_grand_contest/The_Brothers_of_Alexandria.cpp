/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int box[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> box[i];
    }
    sort(box + 1, box + n + 1); // sort number from 1 index to n index.
    cout << box[k] << endl;
    return 0;
}
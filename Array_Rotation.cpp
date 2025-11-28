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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], rotated[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        k = k % n;
        for (int i = 0; i < n; i++)
        {
            rotated[(i + k) % n] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << rotated[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
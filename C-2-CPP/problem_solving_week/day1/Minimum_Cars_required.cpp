/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/MINCARS

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
        // ceiling of n/4 is (n + 3) / 4
        int cars = (n + 3) / 4; // Each car can hold 4 passengers
        cout << cars << endl;
    }
    return 0;
}
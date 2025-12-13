/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/P2_175

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

        // 1st and 3rd position take 1 second
        if (n == 1 || n == 3)
        {
            cout << 1 << endl;
        }
        // 2nd position takes 2 seconds
        else if (n == 2)
        {
            cout << 2 << endl;
        }
        else
        {
            // for n>=4 and even position takes n/2 + 1 seconds
            if (n % 2 == 0)
                cout << n / 2 + 1 << endl;
            // for n>=5 and odd position takes n/2 seconds
            else
                cout << n / 2 << endl;
        }
    }
    return 0;
}
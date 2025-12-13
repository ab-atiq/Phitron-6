/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/GMGM

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, d;
        cin >> n >> d;
        bool close_gun = true; // initally close gun is selected
        bool long_gun = false; // initally long gun is not selected
        int total_switch = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= d)
            {
                if (close_gun == false)
                {
                    total_switch++;
                    close_gun = true;
                    long_gun = false;
                }
            }
            else
            {
                if (long_gun == false)
                {
                    total_switch++;
                    long_gun = true;
                    close_gun = false;
                }
            }
        }
        cout << total_switch << endl;
    }
    return 0;
}
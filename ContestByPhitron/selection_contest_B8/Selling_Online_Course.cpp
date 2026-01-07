/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/selling-online-courses-1


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;

    // corner case if x is 0
    if (x == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    double comission = x * 0.2;                  // 20% commission
    double total_need_to_sell = 100 / comission; // target 100 dollars
    // cout << fixed << setprecision(0) << ceil(total_need_to_sell) << endl;
    cout << (int)ceil(total_need_to_sell) << endl;
    return 0;
}

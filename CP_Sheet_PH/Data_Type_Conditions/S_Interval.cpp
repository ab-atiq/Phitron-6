/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if (x < 0 || x > 100)
    {
        cout << "Out of Intervals\n";
    }
    else if (x >= 0 && x <= 25.0000)
    {
        cout << "Interval [0,25]\n";
    }
    else if (x > 25.0000 && x <= 50.0000)
    {
        cout << "Interval (25,50]\n";
    }
    else if (x > 50.0000 && x <= 75.0000)
    {
        cout << "Interval (50,75]\n";
    }
    else if (x > 75.0000 && x <= 100.0000)
    {
        cout << "Interval (75,100]\n";
    }
    return 0;
}
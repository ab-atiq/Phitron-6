/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    cin >> N; // Read as string to handle up to 10^100

    // X=0, Y=0 always satisfies (0^2 + 0^2) % N = 0 for any N >= 1
    cout << "0 0" << endl;

    return 0;
}
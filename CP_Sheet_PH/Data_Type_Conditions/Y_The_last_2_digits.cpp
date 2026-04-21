/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

// Key Trick -> (a×b) % 100 = ((a%100)×(b%100))%100
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int ans = 1;
    // ans = (ans * a) % 100;
    // ans = (ans * b) % 100;
    // ans = (ans * c) % 100;
    // ans = (ans * d) % 100;

    ans = (ans * (a % 100)) % 100;
    ans = (ans * (b % 100)) % 100;
    ans = (ans * (c % 100)) % 100;
    ans = (ans * (d % 100)) % 100;

    printf("%02lld\n", ans); // ensures 2 digits (like 05)

    // if (ans < 10)
    //     cout << 0;
    // cout << ans << endl;

    return 0;
}
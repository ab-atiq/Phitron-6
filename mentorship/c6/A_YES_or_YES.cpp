/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1703/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // convert to uppercase
        for (char &c : s) {
            c = toupper(c);
        }

        if (s == "YES") 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}

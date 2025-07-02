/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int l, r;
        cin >> l >> r;
        // long long int sum = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     sum += i;
        // }
        // cout << sum << endl;
        long long int sum = (r * (r + 1) / 2) - ((l - 1) * l / 2);
        cout << sum << endl;
    }
    return 0;
} */

// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long l, r;
        cin >> l >> r;

        long long L = min(l, r);
        long long R = max(l, r);

        long long sum = (R * (R + 1) / 2) - ((L - 1) * L / 2);
        cout << sum << '\n';
    }
    return 0;
}


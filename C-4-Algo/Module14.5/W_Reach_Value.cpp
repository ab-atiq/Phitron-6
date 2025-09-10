/*
Approach:
1. Start with 1.
2. If current_value becomes equal to N, return "YES".
3. If current_value exceeds N, return "NO".
4. Recursively try both options:
    Multiply current_value by 10.
    Multiply current_value by 20.
5. If either recursive call returns "YES", print "YES", otherwise print "NO".
*/

#include <bits/stdc++.h>
using namespace std;

bool canReach(long long current, long long target)
{
    if (current == target)
        return true;
    if (current > target)
        return false;

    return canReach(current * 10, target) || canReach(current * 20, target);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (canReach(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

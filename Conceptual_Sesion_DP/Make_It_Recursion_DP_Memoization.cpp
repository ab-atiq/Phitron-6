#include <bits/stdc++.h>
using namespace std;
// time complexity: O(2^n)
// space complexity: O(1)
// bool PossibleReach(int start, int target)
// {
//     if (start == target)
//         return true;

//     if (start > target)
//         return false;

//     return PossibleReach(start + 3, target) || PossibleReach(start * 2, target);
// }

int dp[100005];
// recursive + memoization(bottom-up dp)
// time complexity: O(n)
bool PossibleReach(int start, int target)
{
    if (start == target)
        return true;

    if (start > target)
        return false;

    if (dp[start] != -1)
        return dp[start];

    return dp[start] = PossibleReach(start + 3, target) || PossibleReach(start * 2, target);
}

// top-down dp
// time complexity: O(n)
int dp2[100005];
bool canReach(int N)
{
    if (N == 1)
        return true;

    if (N < 1)
        return false;

    if (dp2[N] != -1)
        return dp2[N];

    // return dp2[N] = canReach(N - 3) || canReach(N / 2);

    // dividing by 2 (only if even) otherwise floating point error
    bool ans = false;
    if (N % 2 == 0)
        ans = canReach(N / 2);
    return dp2[N] = ans || canReach(N - 3);
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--) // O(t) max 10^3
    {
        int n;
        cin >> n;

        // bottom-up dp
        // memset(dp, -1, sizeof(dp)); // O(n)
        // // max time complexity: o(n) = 10^5
        // if (PossibleReach(1, n))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        // top-down dp
        memset(dp2, -1, sizeof(dp2));
        if (canReach(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// bottom up (Tabulation) approach
#include <bits/stdc++.h>
using namespace std;

long long int n;
bool rec(long long int val)
{
    // base case
    if (val == n)
    {
        return true;
    }
    else if (val > n)
    {
        return false;
    }

    // recursive call
    bool l = rec(val * 10);
    bool r = rec(val * 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(1))
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

// Top Down (Memoization) approach
#include <bits/stdc++.h>
using namespace std;

bool rec(long long int n)
{
    // base case
    if (1 == n)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(n))
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

// dp solution using array upto 10^5 value - Not accepted
#include <bits/stdc++.h>
using namespace std;

int dp[100000];
bool rec(long long int n)
{
    // base case
    if (1 == n)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    // dp - already calculated
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    dp[n] = l || r; // calculate
    return dp[n];
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        memset(dp, -1, sizeof(dp)); // -1 assign - default value
        long long int n;
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(n))
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

// array memory optimization using map -- accepted
#include <bits/stdc++.h>
using namespace std;

// Use a map for DP because N is way too large for a standard array
map<long long, bool> dp1;

bool rec(long long n)
{
    // Base case: If we successfully divided down to 1
    if (n == 1)
    {
        return true;
    }

    // Base case: If n is no longer divisible by 10 or 20 and hasn't reached 1
    // (A number < 10 that isn't 1 can never reach 1 by dividing by 10 or 20)
    // if (n < 10)
    if (n == 0)
    {
        return false;
    }

    // DP - check if we already calculated this value
    if (dp1.count(n))
    {
        return dp1[n];
    }

    // Recursive calls: Try dividing by 10 or 20 if possible
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);

    // Only check division by 20 if we haven't already found a solution via 10
    // if (!l && n % 20 == 0)
    if (n % 20 == 0)
        r = rec(n / 20);

    // Store and return result
    return dp1[n] = (l || r);
}

int main()
{
    // Speed up I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;

        // Clear the map for each test case
        dp1.clear();

        if (rec(n))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
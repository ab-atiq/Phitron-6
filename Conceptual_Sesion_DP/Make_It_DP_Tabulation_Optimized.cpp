#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    // Precompute the possible reachable numbers using dynamic programming
    // vector<bool> dp(100001, false); // Using vector<bool> for memory optimization
    bool dp[100001] = {false}; // Using bool array for memory optimization
    dp[1] = true;              // Starting point is 1

    for (int i = 1; i <= 100000; ++i)
    {
        if (dp[i])
        {
            if (i + 3 <= 100000)
                dp[i + 3] = true;
            if (i * 2 <= 100000)
                dp[i * 2] = true;
        }
    }

    // Answer queries based on precomputed dp array
    while (T--)
    {
        int N;
        cin >> N;
        if (dp[N])
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

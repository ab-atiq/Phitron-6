#include <iostream>
#include <vector>
using namespace std;

int knapsack(int N, int W, vector<int> &weights, vector<int> &values, vector<int> &selected_items)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    // Build the DP table
    for (int i = 1; i <= N; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (weights[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Backtracking to find the selected items
    int w = W;
    for (int i = N; i > 0 && w > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {                                    // Item was included
            selected_items.push_back(i - 1); // Store item index
            w -= weights[i - 1];             // Reduce remaining weight
        }
    }

    return dp[N][W];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N, W;
        cin >> N >> W;

        vector<int> weights(N), values(N);
        for (int i = 0; i < N; i++)
            cin >> weights[i];
        for (int i = 0; i < N; i++)
            cin >> values[i];

        vector<int> selected_items;
        int max_value = knapsack(N, W, weights, values, selected_items);

        cout << "Maximum Value: " << max_value << "\n";
        cout << "Selected Items (0-based index): ";
        for (int idx : selected_items)
            cout << idx << " ";
        cout << "\n";
    }

    return 0;
}

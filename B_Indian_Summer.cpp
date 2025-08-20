#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, string>> leaves;
    for (int i = 0; i < n; i++)
    {
        string species, color;
        cin >> species >> color;

        bool found = false;
        for (auto &leaf : leaves)
        {
            if (leaf.first == species && leaf.second == color)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            leaves.push_back({species, color});
        }
    }

    cout << leaves.size() << "\n";
    return 0;
}

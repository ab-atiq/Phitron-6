#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list; // vector of pairs

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
        edge_list.push_back({b, a});
    }

    cout << "Ouput:" << endl;
    for (auto p : edge_list)
    {
        cout << p.first << " " << p.second << endl;
    }

    // for (int i = 0; i < 2 * e; i++)
    // {
    //     cout << edge_list[i].first << " " << edge_list[i].second << endl;
    // }
    return 0;
}
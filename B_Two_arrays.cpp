#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    set<int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }

    vector<int> result;
    for (int x : a)
    {
        if (b.find(x) == b.end())
        { // not found in second array
            result.push_back(x);
        }
    }

    cout << result.size() << "\n";
    for (int x : result)
        cout << x << " ";
    cout << "\n";

    return 0;
}

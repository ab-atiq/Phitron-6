#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> collection(n);
    for (int i = 0; i < n; i++)
    {
        cin >> collection[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        if (binary_search(collection.begin(), collection.end(), k))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

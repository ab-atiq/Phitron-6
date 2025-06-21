#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (auto i = a.begin(); i < a.end(); i++)
    {
        // if (find(a.begin(), a.end(), (*i) + 1) )
        if (find(a.begin(), a.end(), (*i) + 1) != a.end())
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
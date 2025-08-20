#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v[i] = s;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }
    return 0;
}
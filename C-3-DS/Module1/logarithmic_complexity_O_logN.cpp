#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // time complexity O(log n)
    // for (int i = 1; i <= n; i *= 3)
    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << endl;
    // time complexity O(log n)
    for (int i = n; i >= 1; i /= 3)
    {
        cout << i << endl;
    }
    return 0;
}
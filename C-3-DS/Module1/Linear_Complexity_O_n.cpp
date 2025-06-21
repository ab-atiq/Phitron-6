#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // time complexity O(n)
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
    
    // time complexity O(n)
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}
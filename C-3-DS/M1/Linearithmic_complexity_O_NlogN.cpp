#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // time complexity O(n log n)
    for (int i = 1; i <= n; i++) // TC O(n)
    {
        for (int j = 1; j <= n; j *= 2) // TC O(log n)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}
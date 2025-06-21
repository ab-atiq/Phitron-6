#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // time complexity O(n^2)
    for (int i = 0; i < n; i++) // TC O(n)
    {
        for (int j = 0; j < n; j++) // TC O(n)
        {
            cout << "Hello" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // space complexity O(n^2)
    int a[n][n];

    // time complexity O(n)
    // filling the diagonal elements of the matrix
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][i];
    }

    return 0;
}
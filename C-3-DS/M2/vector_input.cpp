#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
5
1 2 3 4 5
10 20 30 40 50

output:
1 2 3 4 5
10 20 30 40 50

*/
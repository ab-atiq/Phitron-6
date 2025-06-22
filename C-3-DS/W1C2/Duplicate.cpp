#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // method 1: frequency count and check for duplicates
    // int freq[100000] = {0}; // array all values set are 0
    vector<int> freq(100000, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 100000; i++)
    {
        if (freq[i] > 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // menthod 2: sort then check two consecutive vector element same
    sort(v.begin(), v.end());

    // int flag = 0;
    bool duplicate = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            // cout << "YES" << endl;
            // return 0;

            // flag = 1;
            duplicate = true;
            break;
        }
    }

    // cout << "NO" << endl;

    // if (flag == 1)
    if (duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
} */

/*
input
5
1 2 3 4 5
output
NO

input
5
1 2 3 4 1
output
YES
*/
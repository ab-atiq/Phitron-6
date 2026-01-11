// solve using binary search

// step-1: input array and query
// step-2: sort the array
// step-3: binary search for query

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // step-1: input array
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int query;
    cin >> query;
    // step-2: sort the array
    sort(arr.begin(), arr.end());

    // step-3: binary search for query
    while (query--)
    {
        int target;
        cin >> target;
        int left = 0, right = n - 1;
        bool found = false;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
            {
                found = true;
                break;
            }
            else if (arr[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
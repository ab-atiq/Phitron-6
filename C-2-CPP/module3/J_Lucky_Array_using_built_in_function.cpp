// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <iostream>
#include <algorithm> // count and min_element
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int arr[1000];
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find the minimum element
    int min_val = *min_element(arr, arr + n); // *min_element return of value of minimum element and min_element return pointer of minimum element

    // Find minimum element manually
    // int min_val = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] < min_val)
    //     {
    //         min_val = arr[i];
    //     }
    // }

    // Count frequency of the minimum element
    int freq = count(arr, arr + n, min_val);

    // Count frequency of minimum element
    // int freq = 0; // min_cnt = 0
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == min_val)
    //     {
    //         freq++; // min_cnt++;
    //     }
    // }

    // Check if frequency is odd
    if (freq % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}

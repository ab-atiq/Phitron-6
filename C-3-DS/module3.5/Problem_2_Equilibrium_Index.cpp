// https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

// find equilibrium index of an array using prefix sum and suffix sum arrays
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> pref(n, 0);
    vector<int> suff(n, 0);

    // Initialize the ends of prefix and suffix array
    pref[0] = arr[0];
    suff[n - 1] = arr[n - 1];

    // Calculate prefix sum for all indices
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + arr[i];

    // Calculating suffix sum for all indices
    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + arr[i];

    // Checking if prefix sum is equal to suffix sum
    for (int i = 0; i < n; i++)
    {
        if (pref[i] == suff[i])
        {
            // return i;
            cout << "Equilibrium index found at: " << i << endl;
            return 0; // Exit the loop once we find the equilibrium index
        }
    }

    // if equilibrium index doesn't exist
    cout << "No equilibrium index found." << endl;

    return 0;
}

/*
// time complexity: O(n)
// space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int total_sum = accumulate(arr.begin(), arr.end(), 0); // Calculate total sum of the array
    int total_sum = 0; // Initialize total sum to 0
    // for (int i = 0; i < n; i++)
    // {
    //     total_sum += arr[i]; // Calculate total sum of the array
    // }
    for (int element : arr)
    {
        total_sum += element; // Calculate total sum of the array
    }

    int left_sum = 0;           // Initialize left sum to 0
    int equilibrium_index = -1; // Initialize equilibrium index to -1 (not found)

    for (int i = 0; i < n; i++)
    {
        // Check if the left sum equals the right sum
        if (left_sum == total_sum - left_sum - arr[i])
        {
            equilibrium_index = i; // Found equilibrium index
            break;
        }
        left_sum += arr[i]; // Update left sum
    }

    if (equilibrium_index != -1)
    {
        cout << "Equilibrium index found at: " << equilibrium_index << endl;
    }
    else
    {
        cout << "No equilibrium index found." << endl;
    }

    return 0;
}
*/
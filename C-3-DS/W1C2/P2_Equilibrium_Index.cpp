// https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

// find equilibrium index of an array using prefix sum and suffix sum arrays

// batch - 7 (conceptual session)

// naive approach - like above O(n^2) time complexity and O(n) space complexity solution
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        // Get left sum
        int leftSum = 0;
        for (int j = 0; j < i; j++)
            leftSum += v[j];

        // Get right sum
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += v[j];

        // If leftsum and rightsum are same, then index i is an equilibrium index
        if (leftSum == rightSum)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// optimal approach - O(n) time complexity and O(n) space complexity
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // prefix sum - O(n)
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // o(n)
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;

    // suffix sum - O(n)
    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cout << suf[i] << " ";
    }
    cout << endl;

    // check suffix sum and prefix sum equal
    // O(n)
    for (int i = 0; i < n; i++)
    {
        if (suf[i] == pre[i])
        {
            cout << i << " ";
            break;
        }
    }

    return 0;
}

// O(n^2) Time and O(1) Space complexity solution
#include <iostream>
#include <vector>
using namespace std;

int findEquilibrium(vector<int> &arr)
{

    // Check for indexes one by one until an equilibrium index is found
    for (int i = 0; i < arr.size(); ++i)
    {
        // Get left sum
        int leftSum = 0;
        for (int j = 0; j < i; j++)
            leftSum += arr[j];

        // Get right sum
        int rightSum = 0;
        for (int j = i + 1; j < arr.size(); j++)
            rightSum += arr[j];

        // If leftsum and rightsum are same, then index i is an equilibrium index
        if (leftSum == rightSum)
            return i;
    }

    // If equilibrium index doesn't exist
    return -1;
}

int main()
{
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};

    cout << findEquilibrium(arr);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
/*
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
 */
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

/*
input
7
-7 1 5 2 -4 3 0
prefix sum
-7 -6 -1 1 -3 0 0
suffix sum
0 7 6 1 -1 3 0

output
3


input
5
1 2 3 2 1
prefix sum
1 3 6 8 9
suffix sum
9 8 6 3 1

output
2
*/

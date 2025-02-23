#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
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

    // method 1: frequency count and check for duplicates.
    // However, this method is most suitable when the range of array values (A[i]) is small(< 10^5 bytes). Since the constraints allow values of 𝐴[𝑖] to go up to 10^9, a frequency vector would require an infeasibly large amount of memory.
    // Memory Limitation: Creating a frequency vector for 10^9 indices would require roughly 4*10^9 bytes (4 GB) of memory.

    // method 2: sort and check for duplicates
    sort(arr.begin(), arr.end());   // O(NlogN)
    for (int i = 0; i < n - 1; i++) // O(N)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "YES" << endl;
            // cout << "Duplicate" << endl;
            return 0;
        }
    }
    // cout << "Unique" << endl;
    cout << "NO" << endl;

    // method 3: using set, unordered_set, map, unordered_map
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) != s.end()) // if (s.count(arr[i]) > 0), if (s.count(arr[i]))
        {
            // cout << "Duplicate" << endl;
            cout << "YES" << endl;
            return 0;
        }
        s.insert(arr[i]);
    }
    // cout << "Unique" << endl;
    cout << "NO" << endl;

    // Initialize a set to track unique elements
    unordered_set<int> seen; // unordered_set may store up to N elements
    string result = "NO";

    // Read the array and check for duplicates
    for (int i = 0; i < n; ++i) // unordered_set operations are average O(1). So, Total time complexity = O(N)
    {
        int num;
        cin >> num;
        // If the number is already in the set, it's a duplicate
        if (seen.count(num)) // O(1)
        {
            result = "YES";
            break;
        }
        seen.insert(num); // Add the number to the set if number is not exist in the set
    }

    // Output the result
    cout << result << endl;

    // using unordered_map
    unordered_map<int, int> um; // map stores at most N distinct elements. SC= O(N)
    string res = "NO";
    for (int i = 0; i < n; i++) // O(N)
    {
        if (++um[arr[i]] > 1) // unordered_map operations (insertion and lookup) are average O(1) time complexity.
        {
            res = "YES";
            break;
        }
    }
    cout << res << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // For count and find functions
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int count = 0; // To count valid elements

    // method 1: Use nested loops
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i] + 1 == a[j])
            {
                count++; // Increment count if a[i] + 1 equals a[j]
                break;   // Break to avoid counting duplicates
            }
        }
    }

    // method 2: Iterate through the array
    // for (int i = 0; i < n; ++i)
    // {
    //     // Use find to check if (a[i] + 1) exists in the vector
    //     if (find(a.begin(), a.end(), a[i] + 1) != a.end())
    //     {
    //         count++; // Increment count if a[i] + 1 exists
    //     }
    // }

    cout << count << endl;
    return 0;
}

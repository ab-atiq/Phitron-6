// array is already sorted or not
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    // Total time complexity = O(N*T)
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n); // SC = O(N). We can optimize this by delete the vector and use previous and current values.
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool isSorted = true;
        for (int i = 1; i < n; i++) // O(N)
        {
            if (arr[i - 1] > arr[i])
            {
                isSorted = false;
                break;
            }
        }
        cout << (isSorted ? "YES" : "NO") << endl;
    }
    return 0;
}
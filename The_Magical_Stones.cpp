/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[i] > arr[j])
                {
                    cnt++;
                }
            }
            cout << cnt << " ";
        }
        cout << "\n";
    }
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> arr(n), sortedArr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sortedArr[i] = arr[i];
        }

        sort(sortedArr.begin(), sortedArr.end());

        // Map each value to how many numbers are strictly smaller
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            if (!freq.count(sortedArr[i]))
            {
                freq[sortedArr[i]] = i; // i = count of smaller elements
            }
        }

        // Output results
        for (int i = 0; i < n; i++)
        {
            cout << freq[arr[i]] << " ";
        }
        cout << "\n";
    }

    return 0;
}

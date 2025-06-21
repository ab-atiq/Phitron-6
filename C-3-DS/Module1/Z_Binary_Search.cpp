#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];

    // total time complexity: O(N * Q)
    while (Q--) // O(Q)
    {
        int x;
        cin >> x;

        // linear search - O(N)
        // bool found = false;
        // for (int i = 0; i < N; i++) // O(N)
        // {
        //     if (a[i] == x)
        //     {
        //         found = true;
        //         break;
        //     }
        // }

        // binary search - O(log N)
        bool found = false;
        int left = 0, right = N - 1;
        while (left <= right) // O(log N)
        {
            int mid = left + (right - left) / 2; // to avoid overflow
            if (a[mid] == x)
            {
                found = true;
                break;
            }
            else if (a[mid] < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);

    for (int i = 0; i < N; i++) // O(N)
        cin >> a[i];

    // Sort the array before searching
    sort(a.begin(), a.end()); // O(NlogN)

    while (Q--)
    {
        int x;
        cin >> x;

        // Binary search - O(logN)
        int l = 0, r = N - 1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (a[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}
/* #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> monocarp(n), steriocarp(n);
        for (int i = 0; i < n; i++)
            cin >> monocarp[i];
        for (int i = 0; i < n; i++)
            cin >> steriocarp[i];

        // Sort monocarp in descending order and steriocarp in ascending order
        sort(monocarp.begin(), monocarp.end(), greater<int>());
        sort(steriocarp.begin(), steriocarp.end());
        // monocarp.erase(monocarp.end() - 1);

        int max_diff = 0; // maximum difference between sum of monocarp and steriocarp
        for (int i = 0; i < n; i++)
        {
            int mon_sum = 0, ste_sum = 0;
            // sum of monocarp from 0 to i
            for (int j = 0; j <= i; j++)
            {
                mon_sum += monocarp[j];
            }
            // sum of steriocarp from 0 to i-1. because, steriocarp will practice 1 day after monocarp so steriocarp will practice i-1 days
            for (int j = 0; j <= i - 1; j++)
            {
                ste_sum += steriocarp[j];
            }

            int diff = mon_sum - ste_sum;
            if (diff > max_diff)
            {
                max_diff = diff;
            }
        }
        cout << max_diff << endl;
    }
    return 0;
} */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> monocarp(n), steriocarp(n);
        for (int i = 0; i < n; i++)
            cin >> monocarp[i];
        for (int i = 0; i < n; i++)
            cin >> steriocarp[i];

        int max_diff = monocarp[n - 1]; // Always train on last day

        for (int i = 0; i < n - 1; i++)
        {
            int gain = monocarp[i] - steriocarp[i + 1];
            if (gain > 0)
                max_diff += gain; // beneficial to train on day i
        }

        cout << max_diff << endl;
    }
    return 0;
}

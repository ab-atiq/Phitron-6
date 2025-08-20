#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> pre_sum(n);
    pre_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre_sum[i] = pre_sum[i - 1] + arr[i];

    int min_continuous_segment = INT_MAX;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (pre_sum[j] - pre_sum[i] == k)
            {
                // cout << "Subarray found between indices " << i + 1 << " and " << j << endl;
                // min_continuous_segment = min(min_continuous_segment, j - i);
                min_continuous_segment = j - i;
            }
    cout << min_continuous_segment << endl;
    return 0;
}

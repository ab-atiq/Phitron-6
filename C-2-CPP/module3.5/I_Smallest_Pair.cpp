// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        // full work with 1 index based
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            // scanf("%d", &arr[i]);
            cin >> arr[i];
        }

        // method 2: find possible smallest result 1 - N
        int small_sum = INT_MAX;
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int cal = arr[i] + arr[j] + j - i;
                // if (cal < small_sum)
                // {
                //     small_sum = cal;
                // }
                small_sum = min(cal, small_sum);
            }
        }

        // printf("%d\n", small_sum);
        cout << small_sum << endl;
    }

    return 0;
}

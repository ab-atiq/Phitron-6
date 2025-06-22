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

    vector<int> suffix_sum(n);
    suffix_sum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = arr[i] + suffix_sum[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << suffix_sum[i] << " ";
    }
    return 0;
}

/*
input
5
1 2 3 4 5

output
15 14 12 9 5
*/
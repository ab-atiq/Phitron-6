#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    // prefix sum
    arr[1] = arr[1]; // not needed if we use same vector for input and output
    for (int i = 2; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }

    // print full vector reverse order
    for (int i = n; i > 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        // v[i] = v[i] + v[i - 1];
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        // cout << v[i] << " ";
        cout << pre[i] << " ";
    }

    return 0;
}
*/
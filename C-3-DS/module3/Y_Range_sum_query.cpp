#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long int> a(N + 1); // prefix sum can be greater than 1^9. So use long long int
    for (int i = 1; i <= N; i++)    // O(N)
    {
        cin >> a[i];
    }

    // prefix sum array in same vector
    a[1] = a[1];                 // O(1) query
    for (int i = 2; i <= N; i++) // prefix sum - O(N)
    {
        a[i] += a[i - 1];
    }

    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum; // sum can be greater than 1^9. So use long long int
        if (l == 1)
            sum = a[r]; // O(1) query
        else
            sum = a[r] - a[l - 1]; // O(1) query
        cout << sum << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    long long k; // Use long long for large k
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;

    // Reduce k to effective rotations
    k = k % n;

    // Create the rotated array
    vector<int> rotated(n);
    for (int i = 0; i < n; i++)
    {
        rotated[(i + k) % n] = a[i];
    }

    // Compute the prefix sum for the rotated array
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + rotated[i];
    }

    // Process each query
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // Output the sum of elements in the range [l, r]
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}

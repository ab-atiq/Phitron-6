// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

// Next module provide optimization of this code
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> a(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> a[i];

    while (Q--)
    {
        int left, right;
        cin >> left >> right;

        // Brute force solution
        int sum = 0;
        for (int j = left; j <= right; j++) // get TLE - O(N)
            sum += a[j];

        cout << sum << endl;
    }
    return 0;
}
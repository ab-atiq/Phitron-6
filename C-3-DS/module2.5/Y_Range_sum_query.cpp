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
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int j = l; j <= r; j++) // get TLE
            sum += a[j];
        cout << sum << endl;
    }
    return 0;
}
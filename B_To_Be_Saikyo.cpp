#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
    }

    int maxOther = 0;

    for (int i = 1; i < N; ++i)
    {
        maxOther = max(maxOther, P[i]);
    }

    int result = 0;
    if (P[0] <= maxOther)
    {
        result = maxOther - P[0] + 1;
    }

    cout << result << endl;
    return 0;
}

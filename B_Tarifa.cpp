#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;

    int used = 0;
    for (int i = 0; i < N; i++)
    {
        int Pi;
        cin >> Pi;
        used += Pi;
    }

    int result = N * X - used + X;
    cout << result << endl;

    return 0;
}

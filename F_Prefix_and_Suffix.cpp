#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;

    if (T.substr(0, N) == S && T.substr(M - N) == S)
        cout << 0 << endl;
    else if (T.substr(0, N) == S)
        cout << 1 << endl;
    else if (T.substr(M - N) == S)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}

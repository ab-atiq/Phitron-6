#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<bool> eldest_son_found(N + 1, false);

    for (int i = 0; i < M; i++)
    {
        int family;
        char gender;
        cin >> family >> gender;

        if (gender == 'M' && !eldest_son_found[family])
        {
            cout << "Yes\n";
            eldest_son_found[family] = true;
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

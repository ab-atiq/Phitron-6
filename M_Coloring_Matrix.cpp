#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> B[i][j];

    bool possible = false;

    vector<vector<int>> rotated = A;

    for (int rotation = 0; rotation < 4; rotation++)
    {
        bool valid = true;
        for (int i = 0; i < N && valid; i++)
        {
            for (int j = 0; j < N && valid; j++)
            {
                if (rotated[i][j] == 1 && B[i][j] != 1)
                {
                    valid = false;
                }
            }
        }
        if (valid)
        {
            possible = true;
            break;
        }

        vector<vector<int>> next(N, vector<int>(N));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                next[j][N - 1 - i] = rotated[i][j];
            }
        }
        rotated = next;
    }

    cout << (possible ? "Yes\n" : "No\n");

    return 0;
}

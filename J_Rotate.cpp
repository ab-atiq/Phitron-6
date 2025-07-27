#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++)
        {
            A[i][j] = row[j] - '0';
        }
    }

    vector<int> ring;

    for (int j = 0; j < N; j++)
        ring.push_back(A[0][j]);

    for (int i = 1; i < N; i++)
        ring.push_back(A[i][N - 1]);

    for (int j = N - 2; j >= 0; j--)
        ring.push_back(A[N - 1][j]);

    for (int i = N - 2; i > 0; i--)
        ring.push_back(A[i][0]);

    int last = ring.back();
    ring.pop_back();
    ring.insert(ring.begin(), last);


    int idx = 0;

    for (int j = 0; j < N; j++)
        A[0][j] = ring[idx++];

    for (int i = 1; i < N; i++)
        A[i][N - 1] = ring[idx++];

    for (int j = N - 2; j >= 0; j--)
        A[N - 1][j] = ring[idx++];

    for (int i = N - 2; i > 0; i--)
        A[i][0] = ring[idx++];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j];
        }
        cout << "\n";
    }

    return 0;
}

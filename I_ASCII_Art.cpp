#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    int A[100][100];

    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            cin >> A[i][j];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (A[i][j] == 0)
                cout << ".";
            else
                cout << char('A' + A[i][j] - 1);
        }
        cout << "\n";
    }

    return 0;
}

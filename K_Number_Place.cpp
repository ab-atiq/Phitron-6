#include <bits/stdc++.h>
using namespace std;

bool checkNine(int counts[])
{
    for (int i = 1; i <= 9; i++)
    {
        if (counts[i] != 1)
            return false;
    }
    return true;
}

int main()
{
    int A[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> A[i][j];

    for (int i = 0; i < 9; i++)
    {
        int counts[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            counts[A[i][j]]++;
        }
        if (!checkNine(counts))
        {
            cout << "No\n";
            return 0;
        }
    }

    for (int j = 0; j < 9; j++)
    {
        int counts[10] = {0};
        for (int i = 0; i < 9; i++)
        {
            counts[A[i][j]]++;
        }
        if (!checkNine(counts))
        {
            cout << "No\n";
            return 0;
        }
    }

    for (int block_i = 0; block_i < 3; block_i++)
    {
        for (int block_j = 0; block_j < 3; block_j++)
        {
            int counts[10] = {0};
            for (int i = block_i * 3; i < block_i * 3 + 3; i++)
            {
                for (int j = block_j * 3; j < block_j * 3 + 3; j++)
                {
                    counts[A[i][j]]++;
                }
            }
            if (!checkNine(counts))
            {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}

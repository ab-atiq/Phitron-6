#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[7 * N];
    for (int i = 0; i < 7 * N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        int weekly_sum = 0;
        for (int j = 0; j < 7; j++)
        {
            weekly_sum += A[i * 7 + j];
        }
        cout << weekly_sum << " ";
    }
    cout << endl;

    return 0;
}

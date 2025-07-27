#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long int L, R;
    cin >> N >> L >> R;

    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        long long int x = A[i];
        if (x < L)
        {
            x = L;
        }
        else if (x > R)
        {
            x = R;
        }
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int S[N], A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    A[0] = S[0];
    for (int i = 1; i < N; i++)
    {
        A[i] = S[i] - S[i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

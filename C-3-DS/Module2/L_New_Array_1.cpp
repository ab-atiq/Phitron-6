#include <iostream>
#include <vector>
#include <algorithm> // for copy
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N), C;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    // insert vector B then A in C vector - type 1
    // C.insert(C.end(), B.begin(), B.end());
    // C.insert(C.end(), A.begin(), A.end());

    // insert vector B then A in C vector - type 2
    // for (int i = 0; i < N; i++)
    // {
    //     C.push_back(B[i]);
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     C.push_back(A[i]);
    // }

    // insert vector B then A in C vector - type 3
    // vector<int> C(N + N);
    // for (int i = 0; i < N; i++)
    // {
    //     C[i] = B[i];
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     C[N + i] = A[i];
    // }

    // insert A then B in C vector - type 4 ('algorithm' header)
    copy(B.begin(), B.end(), back_inserter(C));
    copy(A.begin(), A.end(), back_inserter(C));

    // print vector C
    // for (int i = 0; i < N + N; i++)
    // {
    //     cout << C[i] << " ";
    // }
    // cout << endl;

    // print vector C
    for (auto element : C)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
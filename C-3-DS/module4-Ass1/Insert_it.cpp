#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n); // SC = O(N+M)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int idx_A;
    cin >> idx_A;

    // method 1: insert B vector to index A vector
    // for (int i = 0; i < m; i++)
    // {
    //     A.insert(A.begin() + idx_A + i, B[i]);
    // }

    // method 2: Insert array B into array A at index X
    // A.insert(A.begin() + idx_A, B.begin(), B.end()); // O(N+M) because elements need to be shifted to accommodate the insertion, and elements of B are added to A.

    // // print full vector
    // for (int i = 0; i < n + m; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << endl;

    // method 3: copy all elements before index X of A to new vector C, Then copy all elements from B. Then remaining part of A is copied to C.
    vector<int> C(n + m);
    int idx_C = 0;
    for (int i = 0; i < idx_A; i++)
    {
        C[idx_C++] = A[i];
    }
    for (int i = 0; i < m; i++)
    {
        C[idx_C++] = B[i];
    }
    for (int i = idx_A; i < n; i++)
    {
        C[idx_C++] = A[i];
    }
    // print full vector
    for (int i = 0; i < idx_C; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
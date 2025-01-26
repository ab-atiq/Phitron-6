#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];

    // total time complexity: O(N * Q)
    while (Q--) // O(Q)
    {
        int x;
        cin >> x;

        bool found = false;
        for (int i = 0; i < N; i++) // O(N)
        {
            if (a[i] == x)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

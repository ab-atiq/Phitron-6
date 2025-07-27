#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = n - k; i < n; i++) {
        cout << A[i] << " ";
    }
    for (int i = 0; i < n - k; i++) {
        cout << A[i];
        if (i != n - k - 1) cout << " ";
    }
    cout << endl;

    return 0;
}

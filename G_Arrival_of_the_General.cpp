#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maxH = -1, minH = 101;
    int maxIdx = -1, minIdx = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxH) {
            maxH = a[i];
            maxIdx = i; 
        }
        if (a[i] <= minH) {
            minH = a[i];
            minIdx = i; 
        }
    }

    int swaps = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx) swaps -= 1; 

    cout << swaps << endl;
    return 0;
}

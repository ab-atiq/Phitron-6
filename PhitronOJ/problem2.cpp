#include <iostream>
#include <map>
using namespace std;

int findThiefPearl(int arr[], int n) {
    map<int, int> freq;  // Ordered map to store pearl code frequencies

    // Count occurrences of each pearl code
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the pearl code that appears an odd number of times
    for (auto &p : freq) {
        if (p.second % 2 == 1) {  // If frequency is odd
            return p.first;
        }
    }

    return -1;  // This should never happen based on problem constraints
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;  // Number of pearls (always odd)

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];  // Input pearl codes
        }

        cout << findThiefPearl(arr, N) << endl;  // Output the thief's pearl code
    }

    return 0;
}

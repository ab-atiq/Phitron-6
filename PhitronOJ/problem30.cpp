#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {  // Read input until EOF
        int freq[26] = {0};  // Frequency array for 'a' to 'z'

        // Count occurrences of each letter
        for (char c : s) {
            if (c != ' ') {  // Ignore spaces
                freq[c - 'a']++;
            }
        }

        // Print sorted characters using the frequency array
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                cout << char(i + 'a');  // Convert index back to character
                freq[i]--;
            }
        }
        cout << endl;  // Move to the next line for new input
    }

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    
    while (getline(cin, s)) {  // Read input until EOF
        string result = "";
        
        for (char c : s) {
            if (c != ' ') {  // Ignore spaces
                result += c;
            }
        }
        
        sort(result.begin(), result.end());  // Sort the characters
        
        cout << result << endl;  // Output the sorted word
    }

    return 0;
}

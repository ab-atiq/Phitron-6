#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello, World!";
    cout << s[0] << endl;    // Output: H which is the first character
    cout << s.at(1) << endl; // Output: e which is the second character

    cout << s.front() << endl; // Output: H which is the first character
    cout << s.back() << endl;  // Output: ! which is the last character

    cout << s[s.size() - 1] << endl; // Output: ! which is the last character
    cout << s[100] << endl;          // Undefined behavior, accessing out of bounds
    cout << s[s.size()] << endl;     // Undefined behavior, accessing out of bounds

    return 0;
}
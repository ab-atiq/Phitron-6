#include <iostream>
using namespace std;
int main()
{
    string s = "Hello"; // Create a string from a string literal.
    cout << s << endl;  // Output: Hello

    string s1("Hello"); // Create a string from a C-style string.
    cout << s1 << endl; // Output: Hello

    string s2("Hello World", 3); // Create a string from the first 3 characters of "Hello World".
    cout << s2 << endl;          // Output: Hel

    string s3(s, 3);    // Create a string from the 4th character of s.
    cout << s3 << endl; // Output: lo

    string s4(5, 'A');  // Create a string of 5 'A' characters.
    cout << s4 << endl; // Output: AAAAA
    return 0;
}
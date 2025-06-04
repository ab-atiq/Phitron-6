#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello, World!";
    cout << s << endl; // Output: Hello, World!

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " "; // Output: H e l l o ,   W o r l d !
    }
    cout << endl;

    // cout << s.begin() << endl;  // compilation error due to type mismatch, as begin() returns an iterator, not a character
    cout << *s.begin() << endl;     // Output: H
    cout << *s.end() << endl;       // Output: NULL (undefined behavior, as end() points to one past the last character)
    cout << *(s.end() - 1) << endl; // Output: ! (last character of the string)

    // Using iterators to traverse the string
    // for (string::iterator it = s.begin(); it != s.end(); ++it)
    // for (string::iterator it = s.begin(); it < s.end(); ++it)
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " "; // Output: H e l l o ,   W o r l d !
    }
    cout << endl;
    return 0;
}
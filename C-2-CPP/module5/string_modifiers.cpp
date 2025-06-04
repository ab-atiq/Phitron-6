#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello, World!";
    cout << s1 << endl; // Output: Hello, World!
    string s2 = "C++ Programming";
    cout << s2 << endl; // Output: C++ Programming
    s1 += s2;           // Concatenation like strcat() in C
    cout << s1 << endl; // Output: Hello, World!C++ Programming

    // Modifying strings
    s1.append(" How are you?");
    cout << s1 << endl; // Output: Hello, World!C++ Programming How are you?

    // s1.push_back("Hello"); // Error: push_back expects a single character, not a string
    s1.push_back('!');
    cout << s1 << endl; // Output: Hello, World!C++ Programming How are you?!

    s1 += '@';
    cout << s1 << endl; // Output: Hello, World!C++ Programming How are you?!@

    s1[0] = 'G';        // assigning a character at a specific index
    cout << s1 << endl; // Output: Gello, World!C++ Programming How are you?!@

    s1.pop_back();      // removes the last character
    cout << s1 << endl; // Output: Gello, World!C++ Programming How are you?!

    s1 = "Gello";
    cout << s1 << endl;                     // Output: Gello
    s1 = s2;                                // Assigning s2 to s1
    cout << s1 << endl;                     // Output: C++ Programming
    s1.assign("C++ Programming is great!"); // Assigning a new string
    cout << s1 << endl;                     // Output: C++ Programming is great!

    s1.erase(10);       // Erases the character at index 10 to the end
    cout << s1 << endl; // Output: C++ Progra

    s1.erase(3, 5);     // Erases 5 characters starting from index 3
    cout << s1 << endl; // Output: C++ra

    s1 = "C++ Programming";
    s1.replace(4, 5, "Universe ");
    cout << s1 << endl; // Output: C++ Universe amming where replace string from index 4 then remove 5 characters and insert "Universe "

    s1.insert(4, "Amazing ");
    cout << s1 << endl; // Output: C++ Amazing Universe amming

    // s2.erase(0, 4);
    // cout << s2 << endl; // Output: is fun Programming

    return 0;
}

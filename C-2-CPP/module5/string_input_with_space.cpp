#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;          // Hello World!
    cin >> s;          // read input until the first space
    cout << s << endl; // Output: Hello

    // char s2[100]; // alternative: character array to hold input
    // cin.getline(s2, 100); // take character array input until newline
    // cout << s2 << endl; // Output: Hello World!

    string s2;          // Hello World!
    getline(cin, s2);   // read the entire line including spaces
    cout << s2 << endl; // Output: Hello World!

    int x;    // 12345
    cin >> x; // read integer input, stops at first space

    string s3;
    // cin.ignore(); // ignore the "enter" or newline character after integer input
    getline(cin, s3);   // read the "entire" which enter after integer input
    cout << s3 << endl; // Output: (empty line, since no input was given after integer)

    return 0;
}
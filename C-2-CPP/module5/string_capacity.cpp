#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout << s.size() << endl;     // Output: 11
    cout << s.length() << endl;   // Output: 11
    cout << s.capacity() << endl; // Output: 16 (or more, depending on implementation)
    cout << s.max_size() << endl; // Output: 4611686018427387903 (or similar, depending on implementation)
    cout << s.empty() << endl;    // Output: 0 (false, since the string is not empty)
    s.clear();
    cout << s << endl;         // Output: (empty string)
    cout << s.empty() << endl; // Output: 1 (true, since the string is now empty)
    cout << s.size() << endl;  // Output: 0
    // if (s.empty() == true)
    if (s.size() == 0)
        cout << "String is empty" << endl; // Output: String is empty
    else
        cout << "String is not empty" << endl;

    s = "Hi, How are you?";
    cout << s << endl; // Output: Hi, How are you?
    s.resize(5);
    cout << s << endl; // Output: Hi, H
    s.resize(10);
    cout << s << endl; // Output: Hi, H (followed by 5 null characters)
    s.resize(20, '!');
    cout << s << endl; // Output: Hi, H!!!!!!!!!! (followed by 10 '!' characters)
    return 0;
}
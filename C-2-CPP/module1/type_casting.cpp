#include <iostream>
using namespace std;
int main()
{
    int x = 97;
    char c = 'A';
    // cin >> x;
    cout << "You entered: " << x << endl;
    // printf("%c", x); // character output
    cout << "Character output: " << (char)x << endl;  // type casting to char
    char int_char = x;                                // implicit type casting
    cout << "Int to character: " << int_char << endl; // output duplicate character

    cout << "Character output: " << c << endl;            // character output
    cout << "Integer output: " << (int)c << endl;         // type casting to int
    int char_int = c;                                     // implicit type casting
    cout << "Character to integer: " << char_int << endl; // output duplicate integer
    return 0;
}
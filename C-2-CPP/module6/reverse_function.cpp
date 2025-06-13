#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s; // Hello

    reverse(s.begin(), s.end()); // Reverse the string using reverse function

    cout << s << endl; // Output: olleH
    return 0;
}
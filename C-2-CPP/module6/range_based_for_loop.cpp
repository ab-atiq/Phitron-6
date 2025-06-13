#include <iostream>
using namespace std;
int main()
{
    // string str1 = "Hello, World!";
    string str1;
    // cin >> str1; // Hello, World!
    getline(cin, str1); // Read a full line including spaces

    for (int i = 0; i < str1.length(); i++)
    {
        cout << str1[i] << " "; // Output: H e l l o ,   W o r l d !
    }
    cout << endl;

    for (char c : str1)
    {
        cout << c << " "; // Output: H e l l o ,   W o r l d !
    }
    cout << endl;
    return 0;
}
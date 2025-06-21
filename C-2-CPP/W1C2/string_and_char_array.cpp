// EOF in character array and string
#include <iostream>
using namespace std;

int main()
{
    char arr[1000000];
    while (cin.getline(arr, 1000000))
    {
        cout << arr << endl; // Output the character array
    }

    string str;
    while (getline(cin, str))
    {
        cout << str << endl; // Output the string
    }
    return 0;
}
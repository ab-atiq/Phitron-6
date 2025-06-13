#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str1 = "Hello, World!";
    sort(str1.begin(), str1.end()); // Sort the string in ascending order
    cout << str1 << endl;           // Output: " !,HWdellloor"
    return 0;
}
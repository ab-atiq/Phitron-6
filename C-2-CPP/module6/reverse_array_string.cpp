#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    /* 
    5
    1 2 3 4 5 
    */
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input elements of the array
    }
    reverse(arr, arr + n); // Reverse the array using std::reverse
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the reversed array
    }
    cout << endl;

    string str;                      // Hello, World!
    cin.ignore();                    // Clear the newline character from the input buffer
    getline(cin, str);               // Read a full line including spaces
    reverse(str.begin(), str.end()); // Reverse the string using std::reverse
    cout << str << endl;             // Output the reversed string
    return 0;
}
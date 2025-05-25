#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[5] = {1, 2, 3, 4, 5}; // static array
    int arr[5];              // static array declaration
    int *DyArr = new int[5]; // dynamic array declaration
    cout << "Static array input: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // taking input for static array elements
    }

    cout << "Static array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // printing static array elements
    }

    cout << endl;
    cout << "Dynamic array input: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> DyArr[i]; // taking input for dynamic array elements
    }
    cout << "Dynamic array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << DyArr[i] << " "; // printing dynamic array elements
    }
    cout << endl;

    return 0;
}

/*
Static array input: 1 2 3 4 5
Static array elements: 1 2 3 4 5
Dynamic array input: 10 20 30 40 50
Dynamic array elements: 10 20 30 40 50
*/
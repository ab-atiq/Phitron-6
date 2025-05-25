#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;           // static variable
    int *b = new int(20); // dynamic variable

    // Note: No need to delete static variable, it will be automatically cleaned up
    // delete a; // Error: Cannot delete static variable
    delete b; // Correctly deallocating dynamic variable

    int arr[5] = {1, 2, 3, 4, 5}; // static array
    int *dynamicArr = new int[5]; // dynamic array

    // delete arr; // Error: Cannot delete static array
    // Note: No need to delete static array, it will be automatically cleaned up

    delete[] dynamicArr; // Correctly deallocating dynamic array
    return 0;
}
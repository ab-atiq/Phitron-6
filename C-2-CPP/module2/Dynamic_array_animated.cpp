#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5];              // static array declaration
    int *DyArr = new int[5]; // dynamic array declaration

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << DyArr[i] << "\n"; // printing uninitialized/garbage values of static and dynamic arrays
    }
    return 0;
}

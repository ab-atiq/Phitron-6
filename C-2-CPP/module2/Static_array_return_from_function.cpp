#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int a[5] = {1, 2, 3, 4, 5}; // static array
    return a;                   // returning address of static array
}

int main()
{
    int *x = fun(); // x points to the address of static array returned by fun()

    cout << "Elements of the array returned from function: ";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " "; // printing elements of the array
    }
    cout << endl;
    // Note: This will lead to undefined behavior because the array 'a' in fun() goes out of scope/memory after the function returns.
    // The pointer 'x' will point to a memory location that is no longer valid, leading to potential access violations or garbage values.
    return 0;
}

/*
Elements of the array returned from function: Segmentation fault
*/
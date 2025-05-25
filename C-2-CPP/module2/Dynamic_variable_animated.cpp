#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;         // static variable
    cout << x << endl;  // prints static variable value
    int *p = new int;   // dynamic variable
    *p = 100;           // dereferencing pointer to assign value
    cout << *p << endl; // printing value of dynamic variable using dereference

    return 0;
}
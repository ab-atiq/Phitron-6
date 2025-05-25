#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int; // dynamic variable
    *x = 10;          // dereferencing pointer to assign value
    p = x;            // p pointer points to x address
    cout << "In fun(), p = " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "After calling fun(), p = " << *p << endl; // p still points to x address and can get access of x variable value because x is a dynamic variable, so it remains in memory until explicitly/manually deleted.
    delete p;                                          // Free the dynamically allocated memory to avoid memory leak
    return 0;
}

/*
In fun(), p = 10
After calling fun(), p = 10
*/
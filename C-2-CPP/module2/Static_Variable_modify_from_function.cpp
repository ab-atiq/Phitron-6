#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 10; // static variable
    p = &x;     // p points to x address
    cout << "In fun(), p = " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "After calling fun(), p = " << *p << endl; // p still points to x address, but x goes out from memory. So, p points to garbage value.
    return 0;
}

/*
In fun(), p = 10
After calling fun(), p = 0
*/
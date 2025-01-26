#include <bits/stdc++.h>
using namespace std;

// void fun(int *p) // pass by value
// {
//     p = NULL; // p = NULL But, main function still can access *p
// }
void fun(int *&p) // pass by reference
{
    p = NULL; // p = NULL so, p and *p are now NULL, main function can't access *p
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In Main: " << *p << endl;
    return 0;
}
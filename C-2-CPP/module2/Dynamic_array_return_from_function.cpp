#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[5]; // dynamically allocating an array of size 5
    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1; // initializing the array with values 1 to 5
        // cin >> a[i]; // taking input from user to fill the array
    }
    return a; // returning address of the dynamically allocated array
}

int main()
{
    int *x = fun(); // x points to the address of dynamic array returned by fun()

    cout << "Elements of the array returned from function: ";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " "; // printing elements of the array
    }
    cout << endl;
    
    delete[] x; // deallocating the memory allocated for the array
    return 0;
}

/*
Elements of the array returned from function: Segmentation fault
*/
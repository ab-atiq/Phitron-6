#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3]; // after copy array a to b, we can not delete array a from memory.
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i]; // Copying elements from a to b
    }
    b[3] = 40;
    b[4] = 50;
    // delete[] a; // Error: Cannot delete static array
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // dynamic array
    int *c = new int[3]; // dynamic array
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    int *d = new int[5]; // dynamic array
    for (int i = 0; i < 3; i++)
    {
        d[i] = c[i]; // Copying elements from c to d
    }
    d[3] = 40;
    d[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    delete[] c; // Freeing memory allocated for dynamic array c
    delete[] d; // Freeing memory allocated for dynamic array d
    return 0;
}

/*
input:
1 2 3
output:
1 2 3 40 50

dynamic array
input:
1 2 3
output:
1 2 3 40 50
*/
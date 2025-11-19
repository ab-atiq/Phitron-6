/*
Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.



Sample Input
5
1 2 3 4 5
10
6 7 8 9 10
Sample Output
1 2 3 4 5 6 7 8 9 10

Sample Input
3
10 20 10
5
60 40
Sample Output
10 20 10 60 40

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    // for this problem B array static and dynamic both will work
    int B[m]; // static array B
    // int *B = new int[m]; // dynamic array B
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i]; // copying elements from A to B
    }
    delete[] A; // deleting array A

    // remaining elements of B input
    for (int i = n; i < m; i++)
    {
        cin >> B[i];
    }

    // printing array B
    for (int i = 0; i < m; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // delete[] B; // deleting array B
    return 0;
}
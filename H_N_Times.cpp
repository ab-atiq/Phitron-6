#include <iostream>
using namespace std;

// Function to print character c, n times with space
void printNTimes(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        printNTimes(n, c);
    }

    return 0;
}

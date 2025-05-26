#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    // cout << "Enter an integer: ";
    // cin >> x;
    
    switch (x % 2)
    {
    case 0:
        cout << "Even" << endl;
        break;

    case 1:
        cout << "Odd" << endl;
        break;

    default:
        cout << "Invalid input!" << endl;
    }

    return 0;
}

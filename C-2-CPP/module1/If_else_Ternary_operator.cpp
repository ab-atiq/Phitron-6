#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // Using if-else statement
    if (a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    // Ternary operator
    a = 11;
    cout << (a % 2 == 0 ? "Even" : "Odd") << endl;

    // printing statement inside ternary operator
    a = 12;
    a % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}
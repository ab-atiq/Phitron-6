#include <iostream>
using namespace std;

int main()
{
    int endOfFile;
    while (cin >> endOfFile)
    {
        // Process the input until EOF
        cout << "You entered: " << endOfFile << endl;
    }

    return 0;
}
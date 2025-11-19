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
/* 
input:
10
20
30

output:
You entered: 10
You entered: 20
You entered: 30
*/
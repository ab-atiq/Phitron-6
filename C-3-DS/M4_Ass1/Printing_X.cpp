#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // loop start from 1
    // for (int i = 1; i <= N; ++i)
    // {
    //     for (int j = 1; j <= N; ++j)

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            // if (i == j && i + j == N + 1) // loop start from 1
            if (i == j && i + j == N - 1)
            {
                cout << "X"; // Center of the pattern
            }
            else if (i == j) // diagonal from topLeft to bottomRight
            {
                cout << "\\"; // '\' represent 'escape' character
            }
            // else if (i + j == N + 1)     // loop start from 1
            else if (i + j == N - 1) // diagonal from topRight to bottomLeft
            {
                cout << "/";
            }
            else
            {
                cout << " "; // other cell is empty
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

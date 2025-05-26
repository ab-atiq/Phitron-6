#include <iostream>
using namespace std;

int main()
{
    int x = 'a';
    // cout << "Enter a character: ";
    // cin >> x;
    switch (x)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }
    return 0;
}
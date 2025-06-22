#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int n;
    cin >> n;
    Student a[n]; // Array of objects
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i].name >> a[i].roll >> a[i].mark; // sakib 101 94
        // atiqur rahman
        // 102 89
        cin.ignore();                  // To ignore the newline character left in the input buffer
        getline(cin, a[i].name);       // Read the full name including spaces
        cin >> a[i].roll >> a[i].mark; // Read roll and mark
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}
#include <iostream>
#include <limits>

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
        cin >> a[i].name >> a[i].roll >> a[i].mark; // sakib 101 94
    }

    // int mn = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     // if (a[i].mark < mn)
    //     // {
    //     //     mn = a[i].mark;
    //     // }
    //     mn = min(mn, a[i].mark); // Using the min function to find the minimum mark
    // }
    // cout << "Minimum mark: " << mn << endl;

    Student mn;
    mn.mark = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        //  mn = min(mn, a[i].mark); // invalid use of min function with objects
        if (a[i].mark < mn.mark)
        {
            mn = a[i]; // Update the student object with the minimum mark
        }
    }
    cout << "Minimum mark Student info: " << mn.name << " " << mn.roll << " " << mn.mark << endl;

    return 0;
}
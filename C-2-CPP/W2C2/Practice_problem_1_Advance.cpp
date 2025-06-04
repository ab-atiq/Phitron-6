/* #include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    int n;
    cin >> n;
    Student topper;
    for (int i = 1; i <= n; i++)
    {
        Student tem;

        cin >> tem.roll >> tem.name >> tem.section >> tem.math_marks >> tem.cls;

        // cout << tem.roll << " " << tem.name << " " << tem.section << " " << tem.math_marks << " " << tem.cls << endl;

        if (i == 1)
        {
            topper = tem;
        }
        else
        {
            if (tem.math_marks > topper.math_marks)
            {
                topper = tem;
            }
            else if (tem.math_marks == topper.math_marks)
            {
                if (tem.roll < topper.roll)
                {
                    topper = tem;
                }
            }
        }
    }
    cout << topper.roll << " " << topper.name << " " << topper.section << " " << topper.math_marks << " " << topper.cls << endl;
    return 0;
} */

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    int n;
    cin >> n;

    Student students[n]; // Array of objects

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].roll >> students[i].name >> students[i].section >> students[i].math_marks >> students[i].cls;
    }

    // Initially assume the first student is the topper
    Student topper = students[0];

    for (int i = 1; i < n; i++)
    {
        if (students[i].math_marks > topper.math_marks)
        {
            topper = students[i];
        }
        else if (students[i].math_marks == topper.math_marks && students[i].roll < topper.roll)
        {
            topper = students[i];
        }
    }

    cout << topper.roll << " " << topper.name << " " << topper.section << " " << topper.math_marks << " " << topper.cls << endl;

    return 0;
}

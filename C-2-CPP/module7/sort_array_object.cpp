#include <iostream>
#include <algorithm> // For sort function

using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student l, Student r)
{
    cout << "Hello" << endl; // if total array of student is 4, then this function will be called 6 times

    // if (l.mark < r.mark) // ascending order based on marks
    // if (l.mark > r.mark) // descending order based on marks
    // if (l.roll > r.roll) // descending order based on marks
    // if (l.roll < r.roll) // ascending order based on marks
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    if (l.mark < r.mark)
    {
        return true;
    }
    else if (l.mark > r.mark)
    {
        return false;
    }
    else
    {
        if (l.roll < r.roll) // If marks are equal, sort by roll number in ascending order
        {
            return true;
        }
        else
        {
            return false;
        }
        // return l.roll < r.roll; // If marks are equal, sort by roll number in ascending order
    }
}

// sortcut before compare function
// bool cmp2(Student l, Student r)
// {
//     return (l.mark == r.mark) ? (l.roll < r.roll) : (l.mark > r.mark);
// }

int main()
{
    int n;
    cin >> n;
    Student a[n]; // Array of objects
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark; // sakib 101 94
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}
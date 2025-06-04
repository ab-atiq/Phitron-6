#include <iostream>

#include <algorithm>
using namespace std;

// Define Student class
class Student
{
public:
    string name;
    int roll;
    int marks;
};

// Custom comparator for sorting
bool compare(Student l, Student r)
{
    // if (l.marks != r.marks)
    //     return l.marks > r.marks; // descending by marks
    // else
    //     return l.roll < r.roll; // ascending by roll
    if (l.marks == r.marks)
        return l.roll < r.roll; // ascending by roll if marks are equal
    else
        return l.marks > r.marks; // descending by marks
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

/*
input
5
Asif 29 95
Sakib 55 89
Zubair 57 93
Ahsan 39 86
Joy 12 99

output
Joy 12 99
Asif 29 95
Zubair 57 93
Sakib 55 89
Ahsan 39 86

input
5
Asif 29 95
Sakib 55 86
Zubair 57 86
Ahsan 39 86
Joy 12 99

output
Joy 12 99
Asif 29 95
Ahsan 39 86
Sakib 55 86
Zubair 57 86


*/
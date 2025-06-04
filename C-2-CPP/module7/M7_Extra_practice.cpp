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
    if (l.marks == r.marks)
        return l.roll > r.roll; // descending by roll if marks are equal
    else
        return l.marks < r.marks; // ascending by marks
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
Ahsan 39 86
Sakib 55 89
Zubair 57 93
Asif 29 95
Joy 12 99


input
5
Asif 29 95
Sakib 55 86
Zubair 57 86
Ahsan 39 86
Joy 12 99

output
Zubair 57 86
Sakib 55 86
Ahsan 39 86
Asif 29 95
Joy 12 99

*/
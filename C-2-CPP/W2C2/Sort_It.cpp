/* #include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int mathMarks, engMarks;
};

// Custom comparator function
// bool cmp(Student a, Student b) {
//     if (a.total_marks() != b.total_marks()) {
//         return a.total_marks() > b.total_marks(); // Descending total marks
//     }
//     return a.id < b.id; // Ascending ID if marks equal
// }

bool cmp(Student a, Student b)
{
    if (a.mathMarks + a.engMarks > b.engMarks + b.mathMarks)
        return true;
    else if (a.mathMarks + a.engMarks == b.engMarks + b.mathMarks)
    {
        return a.id <= b.id;
    }
    else
        return false;
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].mathMarks >> a[i].engMarks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].mathMarks << " " << a[i].engMarks << " " << endl;
    }

    return 0;
}
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int tota;
};

// Comparator function to sort the students
bool cmp(student a, student b)
{
    if (a.tota != b.tota)
        return a.tota > b.tota; // Descending order of total marks
    return a.id < b.id;         // Ascending order of ID if total marks are the same
}

int main()
{
    int n;
    cin >> n;
    student st[100];

    // Reading input data
    for (int i = 0; i < n; ++i)
    {
        cin >> st[i].name >> st[i].cls >> st[i].section >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
        st[i].tota = st[i].math_marks + st[i].eng_marks;
    }

    // Sorting the students
    sort(st, st + n, cmp);

    // Output the sorted student data
    for (int i = 0; i < n; ++i)
    {
        cout << st[i].name << " " << st[i].cls << " " << st[i].section << " "
             << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }

    return 0;
}
/*
Sample Input 0

5
Munna 8 D 25 50 30
Shojoy 9 E 26 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99

Sample Output 0

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 26 40 50
Munna 8 D 25 50 30

Sample Input 1

6
Munna 8 D 30 50 40
Shojoy 9 E 25 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Khadija 8 E 26 40 50

Sample Output 1

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 25 40 50
Khadija 8 E 26 40 50
Munna 8 D 30 50 40

*/
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

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // sort(a, a + n);
    reverse(a, a + n);

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
Ahsan 39 86
Zubair 57 93
Sakib 55 89
Asif 29 95


*/
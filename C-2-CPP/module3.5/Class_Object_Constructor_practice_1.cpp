/*
Below is a complete C++ program that:
    1. Creates a Student class.
    2. Defines a constructor.
    3. Creates three static objects.
    4. Compares math_marks among them.
    5. Prints the name of the student who got the highest math_marks.
*/
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

    // Constructor
    Student(string n, int r, char s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    // Create 3 static Student objects using the constructor
    Student s1("Alice", 1, 'A', 85, 10);
    Student s2("Bob", 2, 'B', 92, 10);
    Student s3("Charlie", 3, 'C', 88, 10);

    // Find who has the highest math_marks
    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
    {
        cout << "Topper is: " << s1.name << endl;
    }
    else if (s2.math_marks > s3.math_marks && s2.math_marks > s3.math_marks)
    {
        cout << "Topper is: " << s2.name << endl;
    }
    else
    {
        cout << "Topper is: " << s3.name << endl;
    }

    // Find who has the highest math_marks
    Student top = s1;
    if (s2.math_marks > top.math_marks)
        top = s2;
    if (s3.math_marks > top.math_marks)
        top = s3;
    cout << "Topper in math is: " << top.name << endl;

    // Store them in an array
    Student students[3] = {s1, s2, s3};
    int maxIndex = 0;
    for (int i = 1; i < 3; i++)
    {
        if (students[i].math_marks > students[maxIndex].math_marks)
        {
            maxIndex = i;
        }
    }

    cout << "Topper in math is: " << (students[maxIndex]).name << endl;

    return 0;
}

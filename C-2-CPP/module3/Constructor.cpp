#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        (*this).roll = roll; // this object dereference then access roll variable
        this->cls = cls;     // -> operator dereference and access varible
        this->gpa = gpa;
    }
};

int main()
{
    // Student rahim;
    // rahim.roll = 123;
    // rahim.cls = 6;
    // rahim.gpa = 4.47;
    // cin>>rahim.roll>>rahim.cls>>rahim.gpa; // directly user input inside object without constructor
    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    // Student karim;
    // karim.roll = 23;
    // karim.cls = 5;
    // karim.gpa = 4.7;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    Student rahim(123, 5, 4.33);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    Student karim(23, 8, 4.77);
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}
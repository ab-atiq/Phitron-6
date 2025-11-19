#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        (*this).roll = roll; // this object dereference then access roll variable
        this->cls = cls;     // -> operator dereference and access varible
        this->gpa = gpa;
    }
};

Student fun()
{
    Student karim(23, 8, 4.77);
    return karim;
}

int main()
{
    Student rahim(123, 5, 4.33);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    Student karim_obj = fun(); // function return object copy to karim_obj object in main function stack memory
    cout << karim_obj.roll << " " << karim_obj.cls << " " << karim_obj.gpa << endl;

    return 0;
}
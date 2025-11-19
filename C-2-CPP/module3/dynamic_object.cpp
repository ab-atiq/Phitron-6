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

// after create object that object will remove from stack memory So, we need dynamic memory.
Student *fun()
{
    Student karim(23, 8, 4.77);
    Student *p = &karim;
    return p;
}

// dynamic object create then return object pointer so we can access from stack memory to object heap memory
Student *fun2()
{
    Student *karim = new Student(23, 8, 4.77);

    // Student *p = karim;
    // return p;

    return karim; // return address of karim pointer
}

int main()
{
    // we can not get proper output because karim object remove from stack memory
    Student *karim_obj = fun();
    cout << karim_obj->roll << " " << karim_obj->cls << " " << karim_obj->gpa << endl; // here garbage value print

    // dynamic object
    Student *atiq = new Student(4, 10, 3.43);
    cout << atiq->roll << " " << atiq->cls << " " << atiq->gpa << endl;

    // we can get dynamic object from main function
    Student *karim_dy_obj = fun2();
    cout << karim_dy_obj->roll << " " << karim_dy_obj->cls << " " << karim_dy_obj->gpa << endl;
    return 0;
}
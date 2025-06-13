#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int bangla, english;

    // Student(string n, int r) : name(n), roll(r) {} // Constructor to initialize name and roll

    // Student(string n, int r) // Constructor to initialize name and roll
    // {
    //     name = n;
    //     roll = r;
    //     bangla = 0;  // Initialize marks to 0
    //     english = 0; // Initialize marks to 0
    // }

    Student(string name, int roll)
    {
        this->name = name; // Use 'this' pointer to refer to the current object's members
        this->roll = roll; // Initialize roll number
        bangla = 0;        // Initialize marks to 0
        english = 0;       // Initialize marks to 0
    }

    void hello()
    {
        cout << "Hello, my name is " << name << " and my roll number is " << roll << "." << endl;
    }

    void total()
    {
        cout << "Total marks: " << (bangla + english) << endl;
    }
};
int main()
{
    Student sakib("Sakib", 101); // Create an object of Student class
    sakib.hello();               // Call the hello method to print the message
    sakib.bangla = 85;           // Assign marks to bangla
    sakib.english = 90;          // Assign marks to english
    sakib.total();               // Call the total method to print the total marks

    Student john("John", 102); // Create another object of Student class
    john.hello();              // Call the hello method to print the message
    john.bangla = 78;          // Assign marks to bangla
    john.english = 82;         // Assign marks to english
    john.total();              // Call the total method to print the total marks

    return 0;
}
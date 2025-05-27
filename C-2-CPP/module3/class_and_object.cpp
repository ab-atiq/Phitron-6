#include <iostream>
#include <string.h>
using namespace std;

// class or group create or blueprint of object
class Student
{
public:
    char name[100]; // 100 bytes
    int roll;       // 4 bytes
    double gpa;     // 8 bytes
};

int main()
{
    Student atiq; // object or instance of Student class. it need 1 byte memory for object address point
    atiq.roll = 1905004;
    atiq.gpa = 3.38;
    // atiq.name="Atiqur Rahman"; // we can not setup string like this.

    char name[100] = "Abul Bashar"; // we have to define value when declare
    // name="Abul Bashar"; // can't define value after declaration

    // strcpy(atiq.name, name); // copy name into object atiq.name
    strcpy(atiq.name, "Atiqur Rahman");
    cout << atiq.name << " " << atiq.roll << " " << atiq.gpa << endl;

    Student a, b;
    cin >> a.name >> a.roll >> a.gpa; // rakib 1905007 3.58
    cin >> b.name >> b.roll >> b.gpa; // rony 1905037 3.38

    // cin >> a.name >> a.roll >> a.gpa; // rakib hasan 1905007 3.58 // it will create wrong input because cin can not take name with space.

    cin.getline(a.name, 100); // Rony islam
    cin >> a.roll >> a.gpa;   // 1905037 3.38

    cin.ignore();             // ignore 'enter'
    getchar();                // take input as character which we will not print
    cin.getline(b.name, 100); // Mahmudul Alam // here get 'enter' in name becaluse 'enter' take as input
    cin >> b.roll >> b.gpa;   // 1905023 3.30

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}
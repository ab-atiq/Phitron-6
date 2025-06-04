#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *arr = new Student[n]; // dynamic array of Student objects

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name and ID for student " << i + 1 << ": ";
        cin >> arr[i].name >> arr[i].id;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].display();
    }

    delete[] arr; // deallocate memory

    return 0;
}

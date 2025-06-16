#include <iostream>
using namespace std;

class Student
{
public:
    int id, mark;
    string name;
    char grade;
    Student(int id, string name, char grade, int mark)
    {
        this->id = id;
        this->name = name;
        this->grade = grade;
        this->mark = mark;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int id1, id2, id3, mark1, mark2, mark3;
        string name1, name2, name3;
        char grade1, grade2, grade3;

        cin >> id1 >> name1 >> grade1 >> mark1;
        Student person1(id1, name1, grade1, mark1);

        cin >> id2 >> name2 >> grade2 >> mark2;
        Student person2(id2, name2, grade2, mark2);

        cin >> id3 >> name3 >> grade3 >> mark3;
        Student person3(id3, name3, grade3, mark3);

        int m = max(person1.mark, max(person2.mark, person3.mark)); // Find the maximum mark

        if (m == person1.mark)
        {
            cout << person1.id << " " << person1.name << " " << person1.grade << " " << person1.mark << endl;
        }
        else if (m == person2.mark)
        {
            cout << person2.id << " " << person2.name << " " << person2.grade << " " << person2.mark << endl;
        }
        else if (m == person3.mark)
        {
            cout << person3.id << " " << person3.name << " " << person3.grade << " " << person3.mark << endl;
        }
    }
    return 0;
}
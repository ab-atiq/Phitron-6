#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student s1, s2, s3;
        cin >> s1.id >> s1.name >> s1.section >> s1.marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.marks;

        if (s1.marks >= s2.marks && s1.marks >= s3.marks)
        {
            cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
        }
        else if (s2.marks >= s1.marks && s2.marks >= s3.marks)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
        }
        else
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
        }
    }

    return 0;
}

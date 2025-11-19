// Student class object without constructor
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_mark;
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        Student s1, s2, s3;
        cin >> s1.id >> s1.name >> s1.section >> s1.total_mark;
        // cout << s1.id << s1.name << s1.section << s1.total_mark << endl;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_mark;
        // cout << s2.id << s2.name << s2.section << s2.total_mark << endl;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_mark;
        // cout << s3.id << s3.name << s3.section << s3.total_mark << endl;
        Student top = s1;
        if (s2.total_mark > top.total_mark)
        {
            top = s2;
        }
        // else if (s2.total_mark == top.total_mark)
        // {
        //     // if student id not sequencially provide
        //     if (top.id > s2.id)
        //     {
        //         top = s2;
        //     }
        // }
        if (s3.total_mark > top.total_mark)
        {
            top = s3;
        }
        cout << top.id << " " << top.name << " " << top.section << " " << top.total_mark << endl;
    }
    return 0;
}

// Student class object using constructor
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_mark;
    Student(int i, char n[], char sec, int t_m)
    {
        id = i;
        strcpy(name, n);
        section = sec;
        total_mark = t_m;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int id;
        char name[101];
        char section;
        int total_mark;

        cin >> id >> name >> section >> total_mark;
        Student s1(id, name, section, total_mark); // make object using constructor

        cin >> id >> name >> section >> total_mark;
        Student s2(id, name, section, total_mark);

        cin >> id >> name >> section >> total_mark;
        Student s3(id, name, section, total_mark);

        Student top = s1;
        if (s2.total_mark > top.total_mark)
        {
            top = s2;
        }
        // else if (s2.total_mark == top.total_mark)
        // {
        //     // if student id not sequencially provide
        //     if (top.id > s2.id)
        //     {
        //         top = s2;
        //     }
        // }
        if (s3.total_mark > top.total_mark)
        {
            top = s3;
        }
        cout << top.id << " " << top.name << " " << top.section << " " << top.total_mark << endl;
    }
    return 0;
}

// Struct use
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
        Student a;
        cin >> a.id >> a.name >> a.section >> a.marks;

        Student best = a;
        for (int i = 1; i < 3; i++)
        {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.marks;

            // if student id not sequencially provide - one condition
            // if (s.marks > best.marks || (s.marks == best.marks && s.id < best.id))
            // {
            //     best = s;
            // }

            // if student id not sequencially provide - nested condition
            if (s.marks > best.marks)
            {
                best = s;
            }
            else if (s.marks == best.marks)
            {
                if (s.id < best.id)
                {
                    best = s;
                }
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0;
}

/*
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
        Student best;

        for (int i = 0; i < 3; i++)
        {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.marks;

            if (i == 0)
            {
                best = s;
            }
            else
            {
                if (s.marks > best.marks || (s.marks == best.marks && s.id < best.id))
                {
                    best = s;
                }
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char Name[1000] ;
    char Section;
    int Total;
};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Student a, b, c;
        cin >> a.ID >> a.Name >> a.Section >> a.Total;
        cin >> b.ID >> b.Name >> b.Section >> b.Total;
        cin >> c.ID >> c.Name >> c.Section >> c.Total;

        if (a.Total > b.Total && a.Total > c.Total)
        {
            cout << a.ID << " " << a.Name << " " << a.Section << " " << a.Total << endl;
        }
        else if (b.Total > c.Total && b.Total > a.Total)
        {
            cout << b.ID << " " << b.Name << " " << b.Section << " " << b.Total << endl;
        }
        else if (c.Total > b.Total && c.Total > a.Total)
        {
            cout << c.ID << " " << c.Name << " " << c.Section << " " << c.Total << endl;
        }

       else if (a.Total == b.Total && a.Total == c.Total)
        {
            if (a.ID < b.ID && a.ID < c.ID)
            {
                cout << a.ID << " " << a.Name << " " << a.Section << " " << a.Total << endl;
            }
            else if (b.ID < a.ID && b.ID < c.ID)
            {
                cout << b.ID << " " << b.Name << " " << b.Section << " " << b.Total << endl;
            }
            else if (c.ID < a.ID && c.ID < b.ID)
            {
                cout << c.ID << " " << c.Name << " " << c.Section << " " << c.Total << endl;
            }
        }

      else  if (a.Total == b.Total)
        {
            if (a.ID < b.ID)
            {
                cout << a.ID << " " << a.Name << " " << a.Section << " " << a.Total << endl;
            }
            else
            {
                cout << b.ID << " " << b.Name << " " << b.Section << " " << b.Total << endl;
            }
        }
        else if (b.Total == c.Total)
        {
            if (b.ID < c.ID)
            {
                cout << b.ID << " " << b.Name << " " << b.Section << " " << b.Total << endl;
            }
            else
            {
                cout << c.ID << " " << c.Name << " " << c.Section << " " << c.Total << endl;
            }
        }
        else if (c.Total == a.Total)
        {
            if (a.ID < c.ID)
            {
                cout << a.ID << " " << a.Name << " " << a.Section << " " << a.Total << endl;
            }
            else
            {
                cout << c.ID << " " << c.Name << " " << c.Section << " " << c.Total << endl;
            }
        }
    }

    return 0;
}
*/


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

        // this solution correct when student id provide serially. like, first student id 1, second student id 2, third student id 3
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

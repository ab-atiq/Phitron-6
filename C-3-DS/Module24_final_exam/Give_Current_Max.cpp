#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks < r.marks)
            return true;
        else if (l.marks > r.marks)
            return false;
        // else if (l.marks == r.marks)
        // {
        //     if (l.roll > r.roll)
        //     {
        //         return true;
        //     }
        //     else if (l.roll < r.roll)
        //     {
        //         return false;
        //     }
        // }
        // return true;
        return l.roll > r.roll; // Smaller roll number has higher priority if marks are equal
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;

    // Adding initial students to the priority queue
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            // Add a new student
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            // Print the student with the highest marks
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (command == 1)
        {
            // Print the student with the highest marks
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (command == 2)
        {
            // Remove the student with the highest marks
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();

                // Print the next student with the highest marks
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << endl;
                }
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int rr;
    int marks;

    Student(string name, int rr, int marks)
    {
        this->name = name;
        this->rr = rr;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return true;
        else if (l.marks < r.marks)
            return false;
        else
            return l.rr > r.rr;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int rr, marks;
        cin >> name >> rr >> marks;
        Student obj(name, rr, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().rr << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
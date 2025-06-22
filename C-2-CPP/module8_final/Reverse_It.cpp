#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
    }

    // two pointers approach to reverse the sec field
    // for (int i = 0, j = n - 1; i < j; i++, j--)
    // {
    //     swap(a[i].sec, a[j].sec);
    // }

    // two pointer using while loop
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(a[i].sec, a[j].sec);
        i++;
        j--;
    }

    // Reverse section only
    // for (int i = 0; i < n / 2; i++)
    // {
    //     swap(a[i].sec, a[n - 1 - i].sec);
    // }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    char sec[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].section >> arr[i].marks;
        sec[i] =  arr[i].section;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << sec[n - i - 1] << " " << arr[i].marks << endl;
    }

    return 0;

}



*/
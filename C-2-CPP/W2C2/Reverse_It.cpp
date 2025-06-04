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
        // swap(a[i].sec, a[j].sec);
        swap(a[i].cls, a[j].cls);
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
input:
3
Rakib 7 B 90
Sakib 10 A 85
Ahsan 9 C 36

output:
Rakib 9 B 90
Sakib 10 A 85
Ahsan 7 C 36

*/
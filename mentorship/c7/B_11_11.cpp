#include <iostream>
using namespace std;

bool check_repdigit(int x, int last_dig)
{

    while (x > 0)
    {
        int rem = x % 10;
        if (rem != last_dig)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main()
{
    int month;
    cin >> month;
    int arr[month + 1];
    for (int i = 1; i <= month; i++)
    {
        cin >> arr[i];
    }
    // cout << check_repdigit(1) << endl;
    // cout << check_repdigit(9) << endl;
    // cout << check_repdigit(10) << endl;
    // cout << check_repdigit(11) << endl;
    // cout << check_repdigit(12) << endl;
    // cout << check_repdigit(19) << endl;
    // cout << check_repdigit(22) << endl;
    int cnt_rep_dig = 0;
    for (int i = 1; i <= month; i++)
    {
        int last_dig = i % 10;
        bool chk1 = check_repdigit(i, last_dig);
        // cout<<chk1<<endl;
        if (chk1)
        {
            for (int j = 1; j <= arr[i]; j++)
            {
                // cout << j << " ";
                if (check_repdigit(j, last_dig))
                {
                    // cout << i << " " << j << endl;
                    // if (i == j)
                    cnt_rep_dig++;
                }
            }
            // cout << endl;
        }
    }
    cout << cnt_rep_dig << endl;

    return 0;
}

// another solution - TC = O(N) — একদম ফাস্ট 🚀
#include <bits/stdc++.h>
using namespace std;

// ফাংশন: সব ডিজিট একই কিনা এবং সেই ডিজিটটা কী
int repdigitValue(int x)
{
    string s = to_string(x);
    for (char c : s)
    {
        if (c != s[0])
            return -1;
    }
    return s[0] - '0';
}

int main()
{
    int N;
    cin >> N;

    vector<int> D(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
    }

    int ans = 0;

    for (int month = 1; month <= N; month++)
    {
        int d = repdigitValue(month);
        if (d == -1)
            continue; // মাস repdigit না

        // সম্ভাব্য দিনগুলো: d, dd, ddd
        int day1 = d;
        int day2 = d * 11;
        // int day3 = d * 111;

        if (day1 >= 1 && day1 <= D[month])
            ans++;
        if (day2 >= 1 && day2 <= D[month])
            ans++;
        // if (day3 >= 1 && day3 <= D[month])
        //     ans++;
    }

    cout << ans << endl;
    return 0;
}

// O(1) (constant time)
// এত ছোট যে constraints কোনো ব্যাপারই না।
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> D(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
    }

    int ans = 0;

    // all digit is 1 to 9
    for (int d = 1; d <= 9; d++)
    {
        // সম্ভাব্য মাস
        vector<int> months;
        if (d <= N)
            months.push_back(d);
        if (d * 11 <= N)
            months.push_back(d * 11);

        // সম্ভাব্য দিন
        // vector<int> days = {d, d * 11, d * 111};
        vector<int> days = {d, d * 11};

        // method 1: nested loop
        for (int m : months)
        {
            for (int day : days)
            {
                if (day <= D[m])
                {
                    ans++;
                }
            }
        }
        // method 2: direct calculation
        // for (int m : months)
        // {
        //     if (D[m] >= d)
        //         ans++;
        //     if (D[m] >= d * 11)
        //         ans++;
        //     // if (D[m] >= d * 111)
        //     //     ans++;
        // }
    }

    cout << ans << endl;
    return 0;
}

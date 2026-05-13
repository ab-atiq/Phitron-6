#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int sum = 0;
    long long int smallest_odd = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] % 2 != 0)
        {
            smallest_odd = min(smallest_odd, arr[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - smallest_odd << endl;
    }

    return 0;
}

/*
1. সব সংখ্যার যোগফল বের করো।
2. যদি যোগফল even হয় → এটাই উত্তর।
    2.1 যদি যোগফল odd হয় →
    2.2 একটি মাত্র সংখ্যা বাদ দিতে হবে যাতে যোগফল even হয়।
    2.3 কাকে বাদ দিবে? → সবচেয়ে ছোট odd সংখ্যাটি বাদ দিলেই সবচেয়ে কম কাটা পড়বে।
    2.4 তাহলে: উত্তর = sum - smallest_odd
*/
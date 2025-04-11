#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            idx = i;
            break;
        }
    }
    if (idx != -1)
    {
        cout << idx << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
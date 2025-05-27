#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mn = INT_MAX, min_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == mn)
        {
            min_cnt++;
        }
        else if (x < mn)
        {
            min_cnt = 1; // minimum element is 1 if current element is minimum
            mn = x;
        }
    }
    if (min_cnt % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }
    return 0;
}
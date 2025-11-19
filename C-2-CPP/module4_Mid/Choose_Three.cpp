// solution 1
#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum == s)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// solution 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res, flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    res = arr[i] + arr[j] + arr[k];
                    if (res == sum)
                    {
                        flag = 1;
                        cout << "YES\n";
                        // return 0; // program will close so next test case will not run
                        break; // multiple time sum==res handle
                    }
                }
                if (flag == 1) // multiple time sum==res handle
                    break;
            }
            if (flag == 1) // multiple time sum==res handle
                break;
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int place = 1;
        while (n)
        {
            int rem = n % 10;
            if (rem != 0)
            {
                int rount_num = rem * place;
                v.push_back(rount_num);
            }
            place *= 10;
            n /= 10;
        }
        cout << v.size() << endl;
        for (int num : v)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

// array solution
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int num;
        scanf("%d", &num);
        int round_numbers[10];
        int count = 0;
        int place = 1;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 0)
            {
                round_numbers[count] = digit * place;
                count++;
            }
            num /= 10;
            place *= 10;
        }
        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", round_numbers[i]);
        }
        printf("\n");
    }
    return 0;
}

// character array or string solution
#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[6];
        scanf("%s", s);

        int len = strlen(s);
        int cnt = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
                cnt++;
        }

        printf("%d\n", cnt);

        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
            {
                printf("%c", s[i]);

                int zeros = len - i - 1;
                for (int j = 0; j < zeros; j++)
                {
                    printf("0");
                }

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
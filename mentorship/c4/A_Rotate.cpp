/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int xyz;
    scanf("%d", &xyz);
    // cin >> xyz;
    int a = xyz / 100;
    int b = (xyz / 10) % 10;
    int c = xyz % 10;
    int ans1 = a * 100 + b * 10 + c;
    int ans2 = b * 100 + c * 10 + a;
    int ans3 = c * 100 + a * 10 + b;
    printf("%d\n", ans1 + ans2 + ans3);
    // cout << ans1 + ans2 + ans3 << endl;
    return 0;
}

#include <stdio.h>
int main()
{
    int abc;
    scanf("%d", &abc);

    int a = abc / 100;
    int b = (abc / 10) % 10;
    int c = abc % 10;

    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;

    int result = abc + bca + cab;

    printf("%d\n", result);

    return 0;
}

// Another approach
#include <stdio.h>
int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    int abc = (a - '0') * 100 + (b - '0') * 10 + (c - '0') * 1;
    int bca = (b - '0') * 100 + (c - '0') * 10 + (a - '0') * 1;
    int cab = (c - '0') * 100 + (a - '0') * 10 + (b - '0') * 1;
    printf("%d\n", abc + bca + cab);
    return 0;
}
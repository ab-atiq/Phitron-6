// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double floor_a_by_b = floor(a / b);
    double ceil_a_by_b = ceil(a / b);
    double round_a_by_b = round(a / b);
    cout << "floor " << a << " / " << b << " = " << floor_a_by_b << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil_a_by_b << endl;
    cout << "round " << a << " / " << b << " = " << round_a_by_b << endl;
    return 0;
} */

#include <stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double floor_a_by_b = (int)(a / b);

    // double ceil_a_by_b = (int)(a / b) + ((a / b) > (int)(a / b)); // correct
    // double ceil_a_by_b = (int)(a / b + 0.999999999999); // correct

    double ceil_a_by_b;
    // if (a / b > (int)(a / b)) // correct but may cause precision error
    if ((a / b) - (int)(a / b) > 0)
        ceil_a_by_b = (int)(a / b) + 1;
    else
        ceil_a_by_b = (int)(a / b);

    // double round_a_by_b = (int)(a / b + 0.5); // correct
    double round_a_by_b;
    if ((a / b) - (int)(a / b) >= 0.5)
        round_a_by_b = (int)(a / b) + 1;
    else
        round_a_by_b = (int)(a / b);

    printf("floor %.0lf / %.0lf = %.0lf\n", a, b, floor_a_by_b);
    printf("ceil %.0lf / %.0lf = %.0lf\n", a, b, ceil_a_by_b);
    printf("round %.0lf / %.0lf = %.0lf\n", a, b, round_a_by_b);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int sum1 = A + B;
    int sum2 = A + C;
    int sum3 = B + C;

    int result = max({sum1, sum2, sum3});
    cout << result << endl;

    return 0;
}

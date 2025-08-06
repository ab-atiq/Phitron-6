#include <bits/stdc++.h>
using namespace std;

int reverse_number(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;

        int rev_a = reverse_number(a);
        int rev_b = reverse_number(b);

        int sum = rev_a + rev_b;
        int result = reverse_number(sum);

        cout << result << endl;
    }
    return 0;
}

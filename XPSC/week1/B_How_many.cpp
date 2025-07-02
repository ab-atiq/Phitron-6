#include <iostream>
using namespace std;
int main()
{
    int S, T;
    cin >> S >> T;
    int cnt = 0;
    for (long long int i = 0; i <= 100; i++)
    {
        for (long long int j = 0; j <= 100; j++)
        {
            for (long long int k = 0; k <= 100; k++)
            {
                long long int sum = i + j + k;
                long long int mul = i * j * k;

                if (sum <= S && mul <= T)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
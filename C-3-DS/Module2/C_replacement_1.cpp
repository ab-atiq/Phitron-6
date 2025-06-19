#include <iostream>
#include <vector>
#include <algorithm> // for transform
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // method 1: using if else
    // for (int i = 0; i < N; i++)
    // {
    //     if (A[i] == 0)
    //         // cout << 0 << " ";
    //         A[i] = 0;
    //     else if (A[i] > 0)
    //         // cout << 1 << " ";
    //         A[i] = 1;
    //     else
    //         // cout << 2 << " ";
    //         A[i] = 2;
    // }

    // method 2: using transform
    // Replace values using std::transform and lambda function
    transform(A.begin(), A.end(), A.begin(), [](int x)
              {
                  if (x > 0)
                      return 1;
                  if (x < 0)
                      return 2;
                  return x; // Zero remains unchanged
              });
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
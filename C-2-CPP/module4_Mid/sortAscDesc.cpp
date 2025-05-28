#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[100000 + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Sort the array in ascending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the array in ascending order
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array in descending order
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

int main()
{
    double pi = 3.14159265358979323846;
    printf("%.3lf\n", pi);         // Using format specifier for precision
    cout << fixed;                 // Set fixed-point notation
    cout << setprecision(3) << pi <<endl; // Set precision to 3 decimal places

    // setprecision in one line
    cout << fixed << setprecision(3) << pi << endl; // Set precision to 3 decimal places in one line
    return 0;
}
#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

int main()
{
    double pi = 3.14159265358979323846;
    printf("%.3lf\n", pi);                 // Using format specifier for precision
    cout << "original: " << pi << endl;    // by default precision is 6
    cout << setprecision(5) << pi << endl; // Set precision to 4 significant digits + 1 decimal point(Without std::fixed: When used alone, setprecision(n) sets the total number of significant digits to be displayed for a floating-point number.)

    cout << fixed;                         // Set fixed-point notation (std::fixed is also a sticky manipulator and will affect all subsequent floating-point output until explicitly changed (e.g., by using std::scientific))
    cout << setprecision(3) << pi << endl; // Set precision to 3 decimal places
    cout << "line: " << pi << endl;        // Set precision 3 (fixed)

    // setprecision in one line
    cout << fixed << setprecision(6) << pi << endl; // Set precision to 6 decimal places in one line
    cout << "line 2: " << pi << endl;               // Set precision 6 (fixed)
    return 0;
}
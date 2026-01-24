/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n_students, k_chocolates;
    cin >> n_students >> k_chocolates;
    long long int chocolates_per_student = k_chocolates / n_students;
    cout << chocolates_per_student << " ";
    long long int remaining_chocolates = k_chocolates % n_students;
    cout << remaining_chocolates << endl;
    return 0;
}
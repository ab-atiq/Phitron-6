#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        string S, X;
        cin >> S >> X;

        // if (S.find(X) != string::npos) // this check only one times
        while (S.find(X) != string::npos) // this check multiple times
        {
            S.replace(S.find(X), X.size(), "@");
        }
        cout << S << endl;
    }

    return 0;
}


/*  
Replace word from sentence with given string X
3
helloworld wor
mynameisatiqisatiq is
phitronisgoodphitronisgood good


output
hello@ld
myname@atiq@atiq
phitronis@phitronis@

*/
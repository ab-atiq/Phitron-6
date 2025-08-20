#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    stack<long long> st;

    for (int i = 0; i < N; i++)
    {
        long long x = A[i];
        st.push(x);

        while (st.size() >= 2)
        {
            long long a = st.top();
            st.pop();
            long long b = st.top();
            st.pop();

            if (a == b)
            {
                st.push(a + 1); 
            }
            else
            {
                st.push(b);
                st.push(a);
                break;
            }
        }
    }

    cout << st.size() << "\n";
    return 0;
}

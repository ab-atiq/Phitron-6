/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

/*
🔑 Key Strategy (Greedy)

👉 Always try to use the most complete combination first:

Step 1: Make type (2 eyes + 1 mouth + 1 body)

x = min(n/2, m, k)

Update:

n -= 2*x
m -= x
k -= x

Step 2: Make type (1 eye + 1 mouth + 1 body)

y = min(n, m, k)

Update:

n -= y
m -= y
k -= y

Step 3: Make type (2 eyes + 1 body)

z = min(n/2, k)
🎯 Final Answer
answer = x + y + z
*/

#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long x = n / 2;
    if (x > m)
        x = m;
    if (x > k)
        x = k;

    n -= 2 * x;
    m -= x;
    k -= x;

    long long y = n;
    if (y > m)
        y = m;
    if (y > k)
        y = k;

    n -= y;
    m -= y;
    k -= y;

    long long z = n / 2;
    if (z > k)
        z = k;

    printf("%lld\n", x + y + z);

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long x = min({n / 2, m, k});
    n -= 2 * x;
    m -= x;
    k -= x;

    long long y = min({n, m, k});
    n -= y;
    m -= y;
    k -= y;

    long long z = min(n / 2, k);

    cout << x + y + z << endl;

    return 0;
}

/*
✅ Correct Insight (Very Important)

We should:

First make (1 eye + 1 mouth + 1 body)
Then use remaining for (2 eyes + 1 body)

👉 Because:

Mouths (m) are limited → use them efficiently
Each mouth can help create 1 full doll
🔑 Correct Formula
Step 1:
x = min(n, m, k)

Use:

1 eye
1 mouth
1 body

Update:

n -= x
k -= x
Step 2:
y = min(n/2, k)
🎯 Final Answer
answer = x + y
 */
// ✅ C Solution
#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long x = n;
    if (x > m)
        x = m;
    if (x > k)
        x = k;

    n -= x;
    k -= x;

    long long y = n / 2;
    if (y > k)
        y = k;

    printf("%lld\n", x + y);

    return 0;
}
// ✅ C++ Solution
#include <iostream>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long x = min({n, m, k});
    n -= x;
    k -= x;

    long long y = min(n / 2, k);

    cout << x + y;

    return 0;
}
// 🧪 Test Case Walkthrough

// Input:

// 90 24 89

// Step 1:

// x = min(90,24,89) = 24

// Remaining:

// n = 66, k = 65

// Step 2:

// y = min(66/2, 65) = min(33,65) = 33

// Final:

// 24 + 33 = 57 ✅

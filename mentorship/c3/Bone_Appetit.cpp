/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// https://www.codechef.com/problems/BNE_APT

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bones, blood, x, y;
    scanf("%d %d %d %d", &bones, &blood, &x, &y);
    int total_cost = (bones * x) + (blood * y);
    printf("%d\n", total_cost);
    return 0;
}

// same
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x, y;
	scanf("%d%d%d%d", &n, &m, &x, &y);
	printf("%d\n", n * x + m * y);
    return 0;
}
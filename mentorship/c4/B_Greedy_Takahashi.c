// https://atcoder.jp/contests/abc149/tasks/abc149_b

#include <stdio.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if (k <= a)
    {
        a -= k;
    }
    else if (k >= a + b)
    {
        a = 0;
        b = 0;
    }
    else
    {
        b -= (k - a); // remaining of k-a. if we provide after then a will reduce by 0. so, getting wrong answer.
        a = 0;
    }
    printf("%lld %lld\n", a, b);
    return 0;
}

// solution - 2
// #include <stdio.h>

// int main()
// {
//     long long A, B, K;
//     scanf("%lld %lld %lld", &A, &B, &K);

//     // Eat from Takahashi first
//     long long eatA = (A < K ? A : K);
//     A -= eatA;
//     K -= eatA;

//     // Eat from Aoki next
//     long long eatB = (B < K ? B : K);
//     B -= eatB;
//     K -= eatB;

//     printf("%lld %lld\n", A, B);

//     return 0;
// }

// solution - 3
// #include <stdio.h>

// int main()
// {
//     long long A, B, K;
//     scanf("%lld %lld %lld", &A, &B, &K);

//     // Case 1: K is enough to finish all A's cookies
//     if (K >= A)
//     {
//         K -= A;
//         A = 0;

//         // Now eat from B
//         if (K >= B)
//         {
//             B = 0;
//         }
//         else
//         {
//             B -= K;
//         }
//     }
//     // Case 2: K is not enough, only reduce A
//     else
//     {
//         A -= K;
//     }

//     printf("%lld %lld\n", A, B);
//     return 0;
// }

/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C

// #include <stdio.h>
// int main()
// {
//     int a, b, temp;
//     while (scanf("%d %d", &a, &b), a != 0 || b != 0)
//     {
//         // Swapping the values of a and b
//         if (a > b)
//         {
//             temp = a;
//             a = b;
//             b = temp;
//         }

//         // Printing the swapped values
//         printf("%d %d\n", a, b);
//     }
//     return 0;
// }

// solution 2
#include <stdio.h>
int main()
{
    int a, b, temp;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == 0 && b == 0)
            break;
        // Swapping the values of a and b
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        // Printing the swapped values
        printf("%d %d\n", a, b);
    }
    return 0;
}
/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Hello world");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1;
//     int num2;
//     scanf("%d", &num1);
//     scanf("%d", &num2);
//     printf("your secoend number is: %d", num2);
//     printf("\nyour first number is: %d", num1);
//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     printf("hello/\\/\\\n");
//     printf("100%%");
//     return 0;
// }

#include <stdio.h>
#include <limits.h>
int main()
{
    int a;

    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX; // min value stored
    int mx = INT_MIN;  // max value stored
    int tmp = -1; // max value index
    
    for (int i = 0; i < a; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }

        if (ar[i] > mx)
        {
            mx = ar[i];

            tmp = i;
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (ar[i] == min)
        { 
            // min_index value replace by max value
            ar[i] = mx;
        }
        if (i == tmp)
        {
            // max index value replace by min value
            ar[i] = min;
        }

        printf("%d ", ar[i]);
    }

    return 0;
}
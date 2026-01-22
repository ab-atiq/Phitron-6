/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/EXAMCHEF

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int x, y, z_pass_students;
        scanf("%d %d %d", &x, &y, &z_pass_students);
        int total_students = x * y;
        int total_students_50_percent = (total_students * 50) / 100;
        if (z_pass_students > total_students_50_percent) // strictly greater than 50%
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

// cps
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int total = x * y;

        // if(z*2 > total){
        //     printf("YES\n");
        // }
        // else {
        //     printf("NO\n");
        // }

        int more_than_half = total / 2 + 1;

        if (z >= more_than_half)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
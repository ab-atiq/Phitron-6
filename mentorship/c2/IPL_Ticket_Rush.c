/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/IPLTRSH

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n_stu, m_tick;
        scanf("%d %d", &n_stu, &m_tick);

        int can_not_get_tick = n_stu - m_tick;
        // if(can_not_get_tick>0){
        //     printf("%d\n",can_not_get_tick);
        // }else{
        //     printf("0\n");
        // }
        printf("%d\n", can_not_get_tick > 0 ? can_not_get_tick : 0);
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
        int n, m;
        scanf("%d %d", &n, &m);

        if (m >= n)
        {
            printf("0\n");
        }
        else
        {
            int ans = n - m;
            printf("%d\n", ans);
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        int a;
        scanf("%d", &a);
        if(a>=1900){
            printf("Division 1\n");
        }
        else if(a>=1600){
            printf("Division 2\n");
        }
        else if(a>=1400){
            printf("Division 3\n");
        }
        else{
            printf("Division 4\n");
        }
    }
    return 0;
}
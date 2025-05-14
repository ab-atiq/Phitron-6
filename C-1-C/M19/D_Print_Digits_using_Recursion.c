#include <stdio.h>
void print_digit(int n)
{
    if (n == 0)
        return;

    print_digit(n / 10);
    printf("%d ", n % 10); // reverse order remainder print
}
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        print_digit(n);
        printf("\n");
    }

    return 0;
}

/*  
input: 
3
121
39
123456

output: 
1 2 1 
3 9 
1 2 3 4 5 6 

*/
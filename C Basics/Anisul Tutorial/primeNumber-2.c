.#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i!=0)
        {
            printf("%d is Prime Number.",n);
            break;
        }
        else
        {
            printf("%d is Not Prime Number.",n);
            break;
        }
    }

    return 0;
}

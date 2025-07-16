#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number for check Bigger: ");
    scanf("%d %d",&a,&b);

    int result = a>b ? a : b ;
    printf("Bigger number is: %d",result);
    return 0;
}

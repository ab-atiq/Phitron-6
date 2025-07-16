#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two value: ");
    scanf("%d %d",&a,&b);

    c=a&b;
    printf("Bitwise AND is: %d\n",c);

    c=a|b;
    printf("Bitwise OR is: %d\n",c);

    c=a^b;
    printf("Bitwise EX-OR is: %d\n",c);

    c=~b;
    printf("Bitwise NOR is: %d\n",c);

    return 0;
}

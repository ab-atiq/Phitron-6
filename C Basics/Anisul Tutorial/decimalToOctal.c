#include<stdio.h>
int main()
{
    int octal,decimal;
    printf("Enter Decimal and Octal number respectively: ");
    scanf("%d %o",&decimal,&octal);

    printf("Output Octal and Decimal number respectively: %o %d",decimal,octal);
    return 0;
}

#include<stdio.h>
int main()
{
    int hexaDecimal,decimal;
    printf("Enter Decimal and Hexa Decimal number respectively: ");
    scanf("%d %x",&decimal,&hexaDecimal);

    printf("Output Octal and Decimal number respectively: %x %d",decimal,hexaDecimal);
    return 0;
}


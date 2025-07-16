#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Abul bashar";
    char str2[]="Abul bashar";

    int res = strcmp(str1,str2);


    if(res==0)
    {
        printf("String are equal.");
    }
    else
    {
        printf("String are not equal.");
    }

    return 0;
}

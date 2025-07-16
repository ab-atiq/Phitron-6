#include<stdio.h>

int main()
{
    char s1[30]="Atiqur Rahman";
    char s2[30];

    int i,j,len=0;

    printf("Reverse String is : %s\n",s1);

    for(i=0; s1[i] != '\0'; i++)
    {
        len++;
    }

    printf("%d\n",len);

    for(j=0,i=len-1; i>=0; i--, j++)
    {
        printf("%d %d \t",i,j);
        s2[j]=s1[i];
    }

    printf("\nReverse String is : %s\n",s2);

    int lenStr = strlen(s2);
    printf("%d",lenStr);
    return 0;
}

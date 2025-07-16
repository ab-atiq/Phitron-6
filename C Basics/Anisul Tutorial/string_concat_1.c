#include<stdio.h>
int main(){
    char s1[50]="Atiqur Rahman ";
    char s2[]="is bad boy.";

    int i,j,len=0;;

    for(i=0; s1[i] != '\0'; i++)
    {
        len++;
    };


    for(j=0; s2[j] != '\0'; j++)
    {
        s1[len+j]=s2[j];
    }
    printf("String concatenation: %s\n",s1);

    return 0;
}

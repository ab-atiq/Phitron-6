#include<stdio.h>
int main()
{
    char upper,lower,upToLow,lowToUp;
    printf("Enter Upper and Lower letter: ");
    scanf("%c %c",&upper,&lower);

    printf("First letter Upper letter to Lower letter is: %c\n",upper+32);
    printf("First letter Lower letter to Upper letter is: %c\n",lower-32);

    upToLow=tolower(upper);
    lowToUp=toupper(lower);

    printf("Lower and Upper Letter respectively: %c %c",lowToUp,upToLow);

    return 0;
}

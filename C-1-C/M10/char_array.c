#include<stdio.h>
int main()
{
    char str[5]; // 4 char + 1 null character
    for(int i=0;i<5;i++)
    {
        scanf("%c",str); // A T I Q U R
    }

    // int, float, double does not take space as input
    // char array take space as input 
    for(int i=0;i<5;i++)
    {
        printf("%c",str[i]); // A T 
    }


    char str1[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c",str1); // ATIQUR
    }

    // char array take space as input 
    for(int i=0;i<5;i++)
    {
        printf("%c",str1[i]); // ATIQ
    }

    return 0;
}
#include <stdio.h>

// int my_len(char *str) // correct
int my_len(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];
    scanf("%s", str);
    printf("%d\n", my_len(str));
    return 0;
}

/*
hello
5

atiqurrahman
12
*/
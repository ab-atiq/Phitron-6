#include <stdio.h>
int main()
{
    char str[5];          // 4 char + 1 null character
    // gets(str);            // take input with space A T I Q U R. if enter button pressed then it will stop. 
    fgets(str, 5, stdin); // take input with space A T I Q U R. if enter button pressed then it will stop. but, it will store enter key in str.
    printf("%s", str);    // A T I Q U R
    return 0;
}
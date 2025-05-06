#include <stdio.h>

// method 1: return with parameters
// char char_to_ascii(char c)
// {
//     char cap = c - 32;
//     return cap;
// }

// method 2: return without params
// char char_to_ascii()
// {
//     char ch;
//     scanf("%c", &ch);
//     char cap = ch - 32;
//     return cap;
// }

// method 3: no return, params
// void char_to_ascii(char ch)
// {
//     char cap = ch - 32;
//     printf("%c", cap);
// }

// method 4: no return, no params
void char_to_ascii()
{
    char ch;
    scanf("%c", &ch);
    char cap = ch - 32;
    printf("%c", cap);
}

int main()
{
    // method 1: return with parameters
    // char ch;
    // scanf("%c", &ch);
    // char val = char_to_ascii(ch);
    // printf("%c", val);

    // method 2: return with no parameters
    // char val = char_to_ascii();
    // printf("%c", val);

    // method 3: no return, params
    // char ch;
    // scanf("%c", &ch);
    // char_to_ascii(ch);

    // method 4: no return, no params
    char_to_ascii();

    return 0;
}

/*
Sample Input
a
Sample Output
A

Sample Input
z
Sample Output
Z

Sample Input
q
Sample Output
Q
*/
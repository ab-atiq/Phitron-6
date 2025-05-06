#include <stdio.h>

// method 1: return with parameters
// int char_to_ascii(char c)
// {
//     int ascii_val = c;
//     return ascii_val;
// }

// method 2: return without params
// int char_to_ascii()
// {
//     char ch;
//     scanf("%c", &ch);
//     int ascii_val = ch;
//     return ascii_val;
// }

// method 3: no return, params
// void char_to_ascii(char ch)
// {
//     int ascii_val = ch;
//     printf("%d", ascii_val);
// }

// method 4: no return, no params
void char_to_ascii()
{
    char ch;
    scanf("%c", &ch);
    int ascii_val = ch;
    printf("%d", ascii_val);
}

int main()
{
    // method 1: return with parameters
    // char ch;
    // scanf("%c", &ch);
    // int val = char_to_ascii(ch);
    // printf("%d", val);

    // method 2: return with no parameters
    // int val = char_to_ascii();
    // printf("%d", val);

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
97

Sample Input
A
Sample Output
65

Sample Input
0
Sample Output
48
*/
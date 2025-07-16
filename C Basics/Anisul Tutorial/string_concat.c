#include <stdio.h>
int main() {
    char s[] = "Programming is fun for ";
    char s1[] = "Atiqur Rahman.";

    strcat(s,s1);

    printf("String concatenation = %s\n\n",s);
    printf("Copy Array = %s",s1);

    return 0;
}

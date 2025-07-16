#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    char s1[20];

    strcpy(s1,s);

    printf("Source = %s\n\n",s);
    printf("Copy Array = %s",s1);

    return 0;
}

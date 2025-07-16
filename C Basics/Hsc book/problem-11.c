#include<stdio.h>
int main(){
    int n,i,mul=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        mul=mul*i;
    }
    printf("Multiplication is: %d",mul);
    return 0;
}

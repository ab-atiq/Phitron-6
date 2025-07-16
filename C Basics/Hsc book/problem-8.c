#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number for smallest: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c){
        printf("Smallest number is: %d",a);
    }
    else if(b<c && b<a)
        printf("Smallest number is: %d",b);
    else
        printf("Smallest number is: %d",c);
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number for Biggest number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Biggest number is: %d",a);
    }
    else if(b>c && b>a){
        printf("Biggest number is: %d",b);
    }
    else{
        printf("Biggest number is: %d",c);
    }
}

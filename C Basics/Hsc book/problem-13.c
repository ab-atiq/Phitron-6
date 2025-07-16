#include<stdio.h>
int main(){
    int y;
    printf("Enter a Year: ");
    scanf("%d",&y);
    if(y%400==0){
        printf("%d Is Leap Year.",y);
    }
    else if(y%4==0 && y%100!=0){
        printf("%d Is Leap Year.",y);
    }
    else{
        printf("%d Is Not Leap Year.",y);
    }
    return 0;
}

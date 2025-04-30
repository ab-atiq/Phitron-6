#include <stdio.h>

// 1. Function with return and parameter
int isEven_return_param(int num) {
    return num % 2 == 0;
}

// 2. Function with no return but with parameter
void isEven_noReturn_param(int num) {
    if(num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}

// 3. Function with return but no parameter
int isEven_return_noParam() {
    int num;
    printf("Enter a number for return/no-param function: ");
    scanf("%d", &num);
    return num % 2 == 0;
}

// 4. Function with no return and no parameter
void isEven_noReturn_noParam() {
    int num;
    printf("Enter a number for no-return/no-param function: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}

int main() {
    int number;
    
    // Get input for first two functions
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // 1. Using function with return and parameter
    if(isEven_return_param(number)) {
        printf("(Return+Param) The number is Even.\n");
    } else {
        printf("(Return+Param) The number is Odd.\n");
    }
    
    // 2. Using function with no return but with parameter
    printf("(NoReturn+Param) ");
    isEven_noReturn_param(number);
    
    // 3. Using function with return but no parameter
    if(isEven_return_noParam()) {
        printf("(Return+NoParam) The number is Even.\n");
    } else {
        printf("(Return+NoParam) The number is Odd.\n");
    }
    
    // 4. Using function with no return and no parameter
    printf("(NoReturn+NoParam) ");
    isEven_noReturn_noParam();
    
    return 0;
}
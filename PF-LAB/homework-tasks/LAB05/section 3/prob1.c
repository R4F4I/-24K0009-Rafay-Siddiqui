// ? Write a program using a ternary operator to find the maximum of two numbers.

#include <stdio.h>

int main(){

    int num1, num2;

    printf("num1: ");
    scanf("%d",&num1);
    printf("num2: ");
    scanf("%d",&num2);

    num1>num2 
        ? printf("\n%d",num1) 
        : printf("\n%d",num2);

    return 0;

}
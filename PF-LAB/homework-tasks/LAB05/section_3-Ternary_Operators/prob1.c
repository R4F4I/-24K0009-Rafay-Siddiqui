/*
? Write a program using a ternary operator to find the maximum of two numbers.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// header
#include <stdio.h>

//main function
int main(){

    // declaration
    int num1, num2;

    // inputs
    printf("num1: ");
    scanf("%d",&num1);
    printf("num2: ");
    scanf("%d",&num2);

    // processing
    num1>num2 
        ? printf("\n%d",num1) 
        : printf("\n%d",num2);

    return 0;

}
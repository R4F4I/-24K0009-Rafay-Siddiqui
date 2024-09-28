/*
? Use the ternary operator to check if a number is positive, negative, or zero.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int num;

    // taking inputs

    printf("enter num: ");
    scanf("%d",&num);

    // processing

    // nested ternary operators are used
    num == 0 
    ? printf("zero")  
    : num > 0 
        ? printf("positive") 
        : printf("negative");


    return 0;

}
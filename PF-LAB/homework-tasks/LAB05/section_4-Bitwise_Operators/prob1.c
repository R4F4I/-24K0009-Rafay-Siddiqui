/*
? Write a program to swap two numbers using bitwise XOR

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int num1,num2;

    // taking inputs
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);


    // processing
    // three times xor operations between the two gets them to swap
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    

    // output

    printf("num1: %d\n",num1);
    printf("num2: %d",num2);

    return 0;

}
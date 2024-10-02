/*
? Write a program to find the greatest of three numbers using nested if-else statements.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int num,num1,num2;

    // taking inputs
    printf("enter num:");
    scanf("%d",&num);
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);


    // processing

    if (num>num1){
        if (num>num2){
            printf("%d is greatest",num);
        } else {
            printf("%d is greatest",num2);
        }
        
        
    } else if (num1>num2){
        printf("%d is greatest",num1);
    } else {
        printf("%d is greatest",num2);
    }

    return 0;

}
/*
? Write a program that checks if a year is a leap year using the modulus operator.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int year;

    // taking inputs
    printf("enter year:");
    scanf("%d",&year);


    // processing
    if (year%400==0){
        printf("leap year");
    } else if (year % 100 !=0 && year %4==0){
        printf("leap year");
    }

    return 0;

}
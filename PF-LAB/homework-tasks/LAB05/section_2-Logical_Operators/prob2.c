/*
? Create a program that checks if a person is eligible to vote based on their age and citizenship status.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// header files
#include <stdio.h>
#include <stdbool.h>

// main function
int main(){

    //declarations
    int age;
    char citizenship_status_string[];
    
    // inputs
    printf("enter age");
    scanf("%d",&age);
    printf("enter citizenship_status");
    scanf("%s",&citizenship_status_string);

    // processing
    if (citizenship_status_string == 'YES' && age > 18){
        printf("eligible for vote");
    }

    return 0;
}
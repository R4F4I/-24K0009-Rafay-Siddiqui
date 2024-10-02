/*
? Develop a program that uses logical operators to determine if a person is eligible for a loan
? based on age, income, and credit score.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

/*
    min_age = 18
    min_income = 30000
    min_credit_score = 650

*/


//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int age, income, credit_score;
    int min_age = 18;
    int min_income = 30000;
    int min_credit_score = 650;

    // taking inputs
    printf("enter age:");
    scanf("%d",&age);
    printf("enter income:");
    scanf("%d",&income);
    printf("enter credit_score:");
    scanf("%d",&credit_score);


    // processing

    if (age>= min_age && income>= min_income && credit_score>= min_credit_score){
        printf("eligible for loan");
    } else {
        printf("ineligible for loan");
    }

    return 0;

}
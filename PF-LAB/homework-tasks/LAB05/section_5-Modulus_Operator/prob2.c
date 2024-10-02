/*
? Create a program that calculates the sum of digits of a number until the *result is a single digit*
? (e.g., 123 -> 6).

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// place the input in a loop again if it's resultant is also not a single digit 

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int num, last_digit, temp=0;

    // taking inputs
    printf("enter num:");
    scanf("%d",&num);


    // processing

    // outer loop checks whether the final resultant is a single digit
    while (num>9)
    {
        // inner adds all the digits
        while (num >9){
            last_digit = num % 10;
            temp += last_digit;
            num = num / 10;
        }
        temp += num;
        num = temp;
        temp = 0;
    }
    


    

    // output

    printf("\n%d",num);


    return 0;

}
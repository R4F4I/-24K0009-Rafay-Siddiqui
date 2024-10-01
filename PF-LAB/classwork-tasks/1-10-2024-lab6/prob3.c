/*
? You are tasked with developing an ATM PIN validation system. 
The system should allow a user to enter their 4-digit PIN and validate it against a predefined correct PIN (5678). 
If the user enters the wrong PIN, they should be prompted to try again. 
However, if the user enters the wrong PIN 3 consecutive times, the system should block the card and display a message that the card is blocked. The user should no
longer be able to attempt to enter the PIN after the card is blocked.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// header
#include <stdio.h>

// main
int main (){

    //declaration
    int pin;
    int i=2;
    int CorrectPin = 5678;

    // input
    printf("enter your PIN: ");
    scanf("%d",&pin);
    // run a while loop for incorrect attempts
    while (pin!=CorrectPin){

        // take the inputs again
        printf("\nincorrect pin! try again (%d) : ",i);
        scanf("%d",&pin);
        // stop when the limit is reached
        if (i==0){
            break;
        }
        i-=1;
    }

    // outputs
    if (pin == CorrectPin){
        printf("login success full");
    } else {
        printf("you have been restricted for too many incorrect attempts");
    }
    

    return 0;
}
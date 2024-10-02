/*
? | Write a program that uses bitwise operators to perform encryption and decryption of a
? | character.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    char message[100];
    
    int i=0;
    char encrypted[100];
    char decrypted[100];

    // taking inputs
    printf("enter your message: ");
    scanf("%s",&message);


    // processing
    while(i!=100){
        encrypted[i] = message[i] << 1;
        i++;
    }
    i = 0;
    
    while(i!=100){
        decrypted[i] = encrypted[i] >> 1;
        i++;
    }

    // output
    printf("your encrypted message: %s",encrypted);
    printf("\nyour decrypted message: %s",decrypted);


    return 0;

}

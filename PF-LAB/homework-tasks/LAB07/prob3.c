/*
? You are developing a user input validation system for a registration form. 
The form requires the user to input their name, email, and phone number. 
Validate the inputs with the following rules:

*Name*: Can only contain alphabetic characters (A-Z, a-z), spaces.
*Email*: Can contain alphanumeric characters (A-Z, a-z, 0-9), periods (.), underscores (_), hyphens (-), and must include an @ symbol.
*Phone Number*: Can contain digits (0-9), spaces, hyphens (-), and an optional plus sign (+) at the beginning.

Write a C program that:
- Reads and validates each input.
- Prints an error message for any invalid input, or prints the valid inputs.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    char name[100];
    bool nameCheck = false;
    char email[100];
    bool emailCheck = false;
    char phoneNum[100];
    bool phoneNumCheck = false;

    int i;

    // Scanset example: accepts only alphabetic
    //scanf("%[A-Za-z]", str);
    
    printf("Enter a Name: ");
    scanf("%[A-Za-z ]", name);
    
    
    printf("You entered: %s\n", name);


    printf("Enter a email: ");
    scanf("%[A-Za-z0-9 ._-]", email);
    
    
    printf("You entered: %s\n", email);
    
    for (i = 0; i < 100; i++)
    {
        if (email[i]=='@')
        {
            emailCheck = true;
        }
    }
    printf("%d",emailCheck);

    printf("Enter a email: ");
    scanf("%[A-Za-z0-9 ._-]", email);
    
    
    printf("You entered: %s\n", email);
    

    return 0;
}
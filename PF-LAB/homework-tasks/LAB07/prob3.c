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
    
    char email[100];
    bool emailCheck = false;
    
    char phoneNum[100];
    bool phoneNumCheck = true;

    int i;

    // Scanset example: accepts only alphabetic
    //scanf("%[A-Za-z]", str);

    // INPUTS

    // -- NAME

    // -x-x-x-x-x-x-x-x-x

    printf("Enter a Name: ");
    scanf("%[A-Za-z ]", name);
    getchar();

    // -x-x-x-x-x-x-x-x-x

    // -- EMAIL

    // -x-x-x-x-x-x-x-x-x

    printf("Enter a email: ");
    scanf("%[A-Za-z0-9 ._-@]", email);
    getchar();

    // -x-x-x-x-x-x-x-x-x

    // -- PHONE NO.

    // -x-x-x-x-x-x-x-x-x

    printf("Enter a phoneNum: ");
    scanf("%[0-9._-+]", phoneNum);
    getchar();

    // -x-x-x-x-x-x-x-x-x

    // VALIDATIONS

    // -- NAME

    // -x-x-x-x-x-x-x-x-x

    // no special checking present in name an automatic filter will be applied on invalid names

    // -x-x-x-x-x-x-x-x-x


    // -- EMAIL 

    // -x-x-x-x-x-x-x-x-x

    // a '@' is a must, but only once, in this for loop
    for (i = 0; i < 100; i++)
    {
        if (emailCheck == false && email[i]=='@')
        {
            emailCheck =!emailCheck;
            i++; // quickly skip this index to prevent the if statement below from being activated
        }
        if (emailCheck == true && email[i] == '@'){
            emailCheck =!emailCheck;
            break;
            // 2nd if permanently makes the check false if another '@' is found
        }
    }
    
    // -x-x-x-x-x-x-x-x-x
    

    // -- PHONE NO.

    // -x-x-x-x-x-x-x-x-x
    
    // loop starts from 1 to prevent the '+' in the beginning from being counted as false
    for (i = 1; i < 100; i++)
    {
        if (phoneNum[i] == '+')
        {
            phoneNumCheck = false;
            break;
        }
    }

    // -x-x-x-x-x-x-x-x-x

    // OUTPUTS

    printf("\n\n\nYou entered: %s\n", name);

    printf("You entered: %s", email);
    (emailCheck == false) 
        ? printf(" FAILED\n") 
        : printf(" SUCCESSFUL\n");
    

    printf("You entered: %s", phoneNum);
    (phoneNumCheck == false) 
        ? printf(" FAILED\n") 
        : printf(" SUCCESSFUL\n");
    



    return 0;
}
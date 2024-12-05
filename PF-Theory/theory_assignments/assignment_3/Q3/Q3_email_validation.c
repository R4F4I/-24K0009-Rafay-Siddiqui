/*

? | Create a program to validate an email address based on a few basic criteria. The program will
? | prompt the user to enter an email address and will dynamically allocate memory to store and
? | process the input.
? | Define the following function:
? |     1. int validateEmail(char* email): This function validates the email based on the following
? |         criteria:
? |             ○ Contains exactly one @ symbol.
? |             ○ Contains at least one dot (.) after the @ symbol.
? |             ○ Is non-empty.
? |             ○ Returns 1 if the email is valid, and 0 if invalid.
? | 
? | Steps:
? |     1. User Input: Prompt the user to enter an email address. Allocate memory dynamically for the
? |     email, ensuring the memory size is based on the input length.
? |     2. Validation Process:
? |         ○ Call the validateEmail function to check if the email meets the criteria.
? |     3. Display Results:
? |         ○ Print "Valid Email" if the email meets the criteria.
? |         ○ Print "Invalid Email" if the email does not meet the criteria.
? |     4. Memory Cleanup:
? |         ○ Free the dynamically allocated memory after validation to prevent memory leaks.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF 50

int validateEmail(char *email){
    int len = strlen(email);

    // all three of these have to be satisfied for the email to be valid
    int oneAt = 0;
    int dotAfterAt = 0;
    int nonEmpty=0;

    if (len!=0)
    {
        nonEmpty = 1;
    }
    

    for (size_t i = 0; i < len; i++)
    {
        // check if '@' is present
        if (*(email+i)=='@')
        {
            oneAt = 1;
        }
        
        // if another '@' is found, the email is invalid
        if (*(email+i+1)=='@' && oneAt == 1)
        {
            oneAt = 0;
            break; // leave the loop as soon as we find another '@'
        }

        // email can have multiple dots but having atleast after '@' is required

        if (oneAt == 1 && *(email+i)=='.')
        {
            dotAfterAt = 1;
        }
        

    }
    
    // if all three are valid returns 1 else 0
    // printf("%d %d %d\n",oneAt,nonEmpty,dotAfterAt);
    return oneAt*nonEmpty*dotAfterAt;


}


int main(){

    

    char *email= malloc(20*sizeof(char));
    strcpy(email,"test.@gm@ail.com");
    int len = strlen(email);
    email = realloc(email,len*sizeof(char));

    printf("%s email\n",validateEmail(email)?"valid": "invalid");
    


    free(email);

 return 0;
}
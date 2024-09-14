/*
Write a C program to input a character from the user and check whether the
character is a vowel, consonant, digit, or special character using if-else.
 */


# include <stdio.h>

int main (){

    char character;
    int characterASCII;

    // vowel is subset of ascii: 65-90, 97-122
    // vowel will be checked for first -> A E I O U
    // digit ascii: 48 - 57
    // else special character

    printf("enter character:");
    scanf("%c",&character);
    
    // characterASCII holds int and character holds char,
    // hence the assignment below transfers the ascii of char into the int var
    characterASCII = character;

    // if an alphabet
    if (characterASCII>=65&&characterASCII<=90||characterASCII>=97&&characterASCII<=122){
        // if a vowel either uppercase or lower case
        if (character=='A'||character=='E'||character=='I'||character=='O'||character=='U'||character=='a'||character=='e'||character=='i'||character=='o'||character=='u'){
            printf("Vowel");
        // else consonant
        } else {
            printf("consonant");
        }
    }
    // else if a digit
    else if (characterASCII>=48&&characterASCII<=57)
    {
        printf("Digit");
    } 
    // else special character
    else
    {
        printf("special char");
    }

    return 0;
}
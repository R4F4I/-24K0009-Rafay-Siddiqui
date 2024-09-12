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
    
    characterASCII = character;

    if (characterASCII>=65&&characterASCII<=90||characterASCII>=97&&characterASCII<=122){
        if (character=='A'||character=='E'||character=='I'||character=='O'||character=='U'||character=='a'||character=='e'||character=='i'||character=='o'||character=='u'){
            printf("Vowel");
        } else {
            printf("consonant");
        }
    }     
    else if (characterASCII>=48&&characterASCII<=57)
    {
        printf("Digit");
    } 
    else
    {
        printf("special char");
    }
    
    
    

    //scanf("%d",character);


    return 0;
}
/*
Write a C program to input a character from the user and check whether the
character is a vowel, consonant, digit, or special character using if-else.
 */


# include <stdio.h>

int main (){

    char character;
    char characterASCII;

    // vowel is subset of ascii: 65-90, 97-122
    // vowel will be checked for first
    // digit ascii: 48 - 57
    // else special character

    printf("enter character:");
    scanf("%c",&characterASCII);


    printf("%d",character);


    return 0;
}
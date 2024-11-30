/*

? |Without using standard library functions (strlen, strcpy, etc.), write a program to:
? | * Find the length of a string using pointers.
? | * Reverse a string using pointers.
? | * Concatenate two strings using pointers.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

// the logic behind *p = *q;
/* 
*q is being dereferenced and value in *q is being to sent to address p is pointing at,
the *a notation works differently in lvalue and rvalue
 */


#include <stdio.h>
#include <stdlib.h>

int str_len(char str[]){
    int i= 0;
    // find position of null terminator
    while (*(str+i)!='\0')
    {
        i++;
    }
    return i;
}

void concat(char str[],char str_2[]){
    int len_2 = str_len(str_2),
        len = str_len(str),
        i;

    for (i = 0; i < len_2; i++)
    {
        // char value at offset i in str_2 (str_2 currently is a pointer not a value holder, hence * dereferences it) 
        // is being copied to char value at offset len+i in str, where len is length of string
        *(str+len+i) = *(str_2+i);
    }
}

int main(){

    char str[20]="Hello World";
      
    // length of string
    int len = str_len(str);
    printf("length of \"%s\" is: %d \n",str,len);


    // concatenate
    char str_2[20]="I am responsive";

    // find length of second string and allocate that much space into str
    concat(str,str_2);
    printf("%s",str);


 return 0;
}

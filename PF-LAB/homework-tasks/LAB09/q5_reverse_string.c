/*

?| Create a function that reverses a given string and returns the reversed string. Use this function
?| in the main program to display the reversed string entered by the user.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A



*/

#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int n = strlen(str);
    int start = 0;
    int end =n - 1;
    char temp;

    // Reversing the string in-place
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(){

    char string[100];

    printf("Enter string: ");
    fgets(string,sizeof(string),stdin);

    // remove newline
    string[strcspn(string,"\n")]=='\0'; // use strcspn to find 1st occurrence of \n place that index in string and replace with \0

    reverse_string(string);

    printf("reversed string: %s",string);

    return 0;
}
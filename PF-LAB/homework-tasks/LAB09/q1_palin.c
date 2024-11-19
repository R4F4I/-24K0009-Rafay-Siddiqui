/*

? |Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
? |characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
? |Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
? |For example: "madam", "racecar", "level", "radar".

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <string.h>

int is_palin(char string[]){
    int n = strlen(string);

    if (n%2==0)
    {
        return 0;
    }
    
    for (size_t i = 0; i < n/2; i++)
    {
        if (string[i]!=string[n-1-i])
        {
            return 0;
            
        }
        
    }
    
    return 1;
}

int main(){
    char palin[10][100] = {"madam", "racedar", "level", "radar","heloh"};
    int n = sizeof(palin)/sizeof(palin[0]);

    for (size_t i = 0; i < 5; i++)
    {
        if (is_palin(palin[i]))
        {
            printf("is palindrome\n");
        } else
        {
            printf("is not palindrome\n");
        }
        
        
    }
    
}